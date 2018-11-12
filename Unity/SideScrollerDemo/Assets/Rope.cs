using System.Collections.Generic;
using UnityEngine;

public class Rope : MonoBehaviour {

    private List<GameObject> ropeSegments = new List<GameObject>();

    // The line renderer that renders the actual rope. 
    private LineRenderer lineRenderer;

    public GameObject ropeSegmentPrefab;

    // The Rigidbody2D object that the end of the rope should be connected to. 
    public Rigidbody2D connectedObject;
    
    public float maxRopeSegmentLength = 1.0f;

    public float ropeSpeed = 4.0f;

    public bool isIncreasing { get; set; }
    public bool isDecreasing { get; set; }

	// Use this for initialization
	void Start () {
        // Cache the line renderer so it is not looked up every frame. 
        lineRenderer = this.GetComponent<LineRenderer>();

        // Reset the rope by removing all rope segments and creating a new one
        ResetRope();
    }
	
	// Update is called once per frame
    // On each frame, increase or decrease the length of the rope, if necessary
	void Update () {
        // Get the top rope segment and its SpringJoint2D component
        GameObject topSegment = ropeSegments[0];
        SpringJoint2D topSegmentSpringJoint2D = topSegment.GetComponent<SpringJoint2D>();

        if (isIncreasing)
        {
            // If the rope segment is at max length, then add a new rope segment
            // else increase the length of the top rope segment
            if (topSegmentSpringJoint2D.distance >= maxRopeSegmentLength)
            {
                CreateRopeSegment();
            }
            else
            {
                topSegmentSpringJoint2D.distance += ropeSpeed * Time.deltaTime;
            }
        }

        if (isDecreasing)
        {
            // If the length of the rope segment is nearing 0, then just remove the segment
            // else decrease the length of the top segment
            if (topSegmentSpringJoint2D.distance <= 0.005f)
            {
                RemoveRopeSegment();
            }
            else
            {
                topSegmentSpringJoint2D.distance -= ropeSpeed * Time.deltaTime;
            }
        }

        if (lineRenderer != null)
        {
            // The line renderer draws lines from a collection of points.
            // These points need to be kept in sync with the positions of the rope segments. 

            // The number of line renderer vertices = 
            // # of rope segments + a point at the top for the rope anchor + a point at the bottom for the player
            lineRenderer.positionCount = ropeSegments.Count + 2;

            // The top vertex of the line renderer is at the rope's location
            lineRenderer.SetPosition(0, this.transform.position);

            // The bottom vertex of the line renderer is at the connectedObject's anchor
            SpringJoint2D connectedObjectSpringJoint2D = connectedObject.GetComponent<SpringJoint2D>();
            lineRenderer.SetPosition(ropeSegments.Count + 1, connectedObject.transform.TransformPoint(connectedObjectSpringJoint2D.anchor));

            // The vertices in between should be at the positions of the rope segments
            for (int i = 0; i < ropeSegments.Count; i++)
            {
                lineRenderer.SetPosition(i + 1, ropeSegments[i].transform.position);
            }
        }
	}

    public void ResetRope()
    {
        foreach (GameObject segment in ropeSegments)
        {
            UnityEngine.Object.Destroy(segment);
        }

        ropeSegments = new List<GameObject>();

        isIncreasing = false;
        isDecreasing = false;

        CreateRopeSegment();
    }

    public void CreateRopeSegment()
    {
        // Create a new rope segment from its prefab
        GameObject ropeSegment = UnityEngine.Object.Instantiate(
            this.ropeSegmentPrefab, 
            this.transform.position, 
            UnityEngine.Quaternion.identity);

        // Make the new rope segment a child of this Rope object (as this script is attached to the Rope object)
        // and make it keep its world position
        ropeSegment.transform.SetParent(this.transform, worldPositionStays: true);

        Rigidbody2D currentRopeSegmentRigidBody2D = ropeSegment.GetComponent<Rigidbody2D>();
        SpringJoint2D currentRopeSegmentSpringJoint2D = ropeSegment.GetComponent<SpringJoint2D>();

        if (currentRopeSegmentRigidBody2D == null || currentRopeSegmentSpringJoint2D == null)
        {
            Debug.LogError("Rope Segment prefab has no Rigidbody2D and/or SpringJoint2D components");
            return;
        }

        ropeSegments.Insert(0, ropeSegment);

        // The first rope segment needs to be connected to the player
        if (ropeSegments.Count == 1)
        {
            SpringJoint2D connectedObjectSpringJoint2D = this.connectedObject.GetComponent<SpringJoint2D>();
            connectedObjectSpringJoint2D.connectedBody = currentRopeSegmentRigidBody2D;
            connectedObjectSpringJoint2D.distance = 0.1f;
            currentRopeSegmentSpringJoint2D.distance = maxRopeSegmentLength;
        }
        else
        {
            // Any other rope segment has to be connected to the previous rope segment

            // The first rope segment is connected to the player's leg (represented as connectedObject)
            // The second rope segment would be connected to the first rope segment
            // The third rope segment would be connected to the second rope segment
            GameObject prevRopeSegment = ropeSegments[1];

            SpringJoint2D prevRopeSegmentSpringJoint2D = prevRopeSegment.GetComponent<SpringJoint2D>();
            prevRopeSegmentSpringJoint2D.connectedBody = currentRopeSegmentRigidBody2D;
            currentRopeSegmentSpringJoint2D.distance = 0.0f;
        }

        // Connect the new segment to the rope anchor.
        currentRopeSegmentSpringJoint2D.connectedBody = this.GetComponent<Rigidbody2D>();
    }

    // Used to shrink the rope by removing a rope segment
    void RemoveRopeSegment()
    {
        if (ropeSegments.Count < 2)
        {
            return;
        }

        // Get the top segment and the segment under it
        GameObject topSegment = ropeSegments[0];
        GameObject topButOneSegment = ropeSegments[1];

        // Connect the top but one segment to the rope's anchor. 
        SpringJoint2D topButOneSegmentSpringJoint2D = topButOneSegment.GetComponent<SpringJoint2D>();
        topButOneSegmentSpringJoint2D.connectedBody = this.GetComponent<Rigidbody2D>();

        ropeSegments.RemoveAt(0);
        UnityEngine.Object.Destroy(topSegment);
    }
}
