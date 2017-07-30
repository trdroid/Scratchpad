using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.VR.WSA.Input;

public class Shoot : MonoBehaviour {

    GestureRecognizer recognizer;
    public float ForceMagnitude = 300f;

	// Use this for initialization
	void Start () {
        recognizer = new GestureRecognizer();
        recognizer.TappedEvent += ShootBall;
        recognizer.StartCapturingGestures();
	}
	
	// Update is called once per frame
	void Update () {
		
	}

    private void ShootBall(InteractionSourceKind source, int tapCount, Ray headRay)
    {
        var ball = GameObject.CreatePrimitive(PrimitiveType.Sphere);
        ball.transform.localScale = new Vector3(0.1f, 0.1f, 0.1f);

        var rigidBody = ball.AddComponent<Rigidbody>();
        rigidBody.mass = 0.5f;
        rigidBody.position = transform.position;

        var transformForward = transform.forward;
        transformForward = Quaternion.AngleAxis(-10, transform.right) * transformForward;

        rigidBody.AddForce(transformForward * ForceMagnitude);
    }

    public void OnShoot()
    {
        ShootBall(InteractionSourceKind.Voice, 1, new Ray());
    }
}
