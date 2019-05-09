using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class JoystickPlayerExample : MonoBehaviour
{
    public float speed;
    public VariableJoystick variableJoystick;
    public Rigidbody rb;

    public void FixedUpdate()
    {
        Vector3 direction = Vector3.forward * variableJoystick.Vertical + Vector3.right * variableJoystick.Horizontal;
        //Debug.Log(direction);
        rb.AddForce(direction * speed * Time.fixedDeltaTime, ForceMode.VelocityChange);

        //rotate the tank in joystick direction
        Twist();
    }

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
            transform.localEulerAngles = new Vector3(0f, Mathf.Atan2(h1, v1) * 180 / Mathf.PI, 0f); // this does the actual rotaion according to inputs
        }
    }
}