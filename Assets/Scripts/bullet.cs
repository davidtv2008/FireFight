using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System;
public class bullet : MonoBehaviour {

	public float speed = 20f;
	public Rigidbody rb;
	public float timeLeft = 5;

	private float x;
	private float y;

	//public Flare flare;
	// Use this for initialization
	public AudioClip bulletSound;

	void Start () {
		rb.velocity = transform.forward *  speed;
	}

	void Update(){
		timeLeft -= Time.deltaTime;	
		
		
		
		//start the 5 second countdown for each individual bullet fired, after 5 seconds object will be destroyed.
		if(timeLeft <= 0)
		{

			GameObject player1 = GameObject.Find("player1");

            //weapon wp = player1.GetComponent<weapon>();

			//GameObject[] objs = GameObject.FindGameObjectsWithTag("globalSettings");
        	//GlobalMenuSettings settings = objs[0].GetComponent<GlobalMenuSettings>();
						
			//if(wp.numberBullets < settings.bullets){
			//	wp.numberBullets += 1;
			
		//}

			Destroy(gameObject);
		}
	}

    private void OnTriggerEnter(Collider obj)
    {

        //destroy bullet upon contact with player
        /*
        if(obj.name == "player")
        {
            Destroy(gameObject);
        }
        else
        {
            Debug.Log(obj.name);
            rb.velocity = Vector3.zero;
            Destroy(gameObject);
        }
        */

        Destroy(gameObject);

    }
}
