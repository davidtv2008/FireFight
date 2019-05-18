using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class JoystickPlayerExample : MonoBehaviour
{
    public float speed;
    public VariableJoystick variableJoystick;
    public GameObject cam1;
    public GameObject cam2;
    public Rigidbody rb;

    public void FixedUpdate()
    {
        Vector3 direction = Vector3.forward * variableJoystick.Vertical + Vector3.right * variableJoystick.Horizontal;
        //Debug.Log(direction);


        var camera1 = cam1.GetComponent<Camera>();
        //var camera2 = cam2.GetComponent<Camera>();

        if (camera1.enabled)
        {
            //force needs to be changed depending on camera view
            rb.AddForce(direction * speed * Time.fixedDeltaTime, ForceMode.VelocityChange);

        }
        /*
        else if (camera2.enabled)
        {
            //force needs to be changed depending on camera view
            //Debug.Log(ForceMode.VelocityChange);
            rb.AddForce(direction * (speed - 20) * Time.fixedDeltaTime, ForceMode.VelocityChange);

        }
        */
        //rotate the tank in joystick direction
        Twist();
    }

    /*public void switchView()
    {
        var camera1 = cam1.GetComponent<Camera>();
        var camera2 = cam2.GetComponent<Camera>();

        if (camera1.enabled)
        {
            camera1.enabled = false;
            camera2.enabled = true;
        }
        else if (camera2.enabled)
        {
            camera2.enabled = false;
            camera1.enabled = true;
        }
    }
    */
    //rotate in the direction of the joystick direction
    void Twist()
    {
        var h1 = variableJoystick.Horizontal; // set as your inputs 
        var v1 = variableJoystick.Vertical;

        if (h1 == 0f && v1 == 0f)
        { // this statement allows it to recenter once the inputs are at zero
             
        }
        else
        {
            //Debug.Log(h1);
            //Debug.Log(v1);
            transform.localEulerAngles = new Vector3(0f, Mathf.Atan2(h1, v1) * 180 / Mathf.PI, 0f);
            //transform.localEulerAngles = new Vector3(0f, Mathf.Atan2(h1, v1) * 180 / Mathf.PI, 0f); // this does the actual rotaion according to inputs
        }
    }
}