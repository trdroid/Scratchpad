using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MouseLook : MonoBehaviour
{
    public enum RotationAxes
    {
        HorizontalAndVertical = 0,
        Horizontal = 1,
        Vertical = 2
    }

    // Declare a public variable so it can be configured in the Unity's editor
    public RotationAxes axes = RotationAxes.HorizontalAndVertical;

    // Allows to control the speed of the horizontal rotation
    public float horizontalSensitivity = 9.0f;

    // Allows to control the speed of the vertical rotation
    public float verticalSensitivity = 9.0f;

    public float minVerticalRotationAngle = -45.0f;
    public float maxVerticalRotationAngle = 45.0f;

    private float currentVerticalRotationAngle = 0;

    // Use this for initialization
    void Start()
    {
    }

    // Update is called once per frame
    void Update()
    {
        if (axes == RotationAxes.Horizontal)
        {
            // Code to rotate horizontally i.e. around the Y-axis with the mouse moving along the X-axis
            this.transform.Rotate(0, Input.GetAxis("Mouse X") * horizontalSensitivity, 0);
        }
        else if (axes == RotationAxes.Vertical)
        {
            // Code to rotate vertically i.e. around the X-axis with the mouse moving along the Y-axis

            // Since in Left Hand Coordinate System the +ve rotation is clockwise, when the mouse is dragged upward
            // i.e. in the +ve Y axis, the rotation along the X-axis has to be negative i.e. counterclockwise
            // When the mouse is dragged downward i.e. in the -ve Y axis, the rotation along the X-axis has to be +ve i.e. clockwise
            // which explains the -= below. 
            currentVerticalRotationAngle -= Input.GetAxis("Mouse Y") * verticalSensitivity;

            // Restrict the value between the min and max vertical rotation angle. 
            currentVerticalRotationAngle = Mathf.Clamp(currentVerticalRotationAngle, minVerticalRotationAngle, maxVerticalRotationAngle);

            // Keep the horizontal rotation value as is i.e. if the rotation along Y-axis is 30 degrees before 
            // any movement upward/downward then the looking up/down should happen at the same angle.
            float horitzontalRotation = this.transform.localEulerAngles.y;

            this.transform.localEulerAngles = new Vector3(currentVerticalRotationAngle, horitzontalRotation, 0);
        }
        else
        {
            // Code to rotate both horizontally (around the Y-axis) and vertically (around the X-axis)

            // Handle the horizontal rotation i.e. around the Y-axis with the mouse moving along the X-axis
            // Based on the mouse movement, get the amount of degress to rotate horizontally
            float currentHorizontalRotationAngle = Input.GetAxis("Mouse X") * horizontalSensitivity;

            // Since we'd be setting the rotation directly to transform.localEulerAngles, get the current 
            // angle of horizontal rotation and add the offset from the previous step. 
            // Note we do not use -= here as a movement along the +ve X-axis implies a +ve rotation (clockwise) around the Y-axis
            // Therefore a reversal of sign in the calculation is not needed. 
            currentHorizontalRotationAngle += transform.localEulerAngles.y;

            // Handle the vertical rotation i.e. around the X-axis with the mouse moving along the Y-axis
            currentVerticalRotationAngle -= Input.GetAxis("Mouse Y") * verticalSensitivity;
            currentVerticalRotationAngle = Mathf.Clamp(currentVerticalRotationAngle, minVerticalRotationAngle, maxVerticalRotationAngle);

            this.transform.localEulerAngles = new Vector3(currentVerticalRotationAngle, currentHorizontalRotationAngle, 0);
        }
    }
}