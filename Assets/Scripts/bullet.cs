﻿using System.Collections;
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

		//GetComponent<AudioSource> ().playOnAwake = true;


		//GetComponent<AudioSource> ().clip = bulletSound;

		//GameObject[] objs = GameObject.FindGameObjectsWithTag("globalSettings");
        //GlobalMenuSettings settings = objs[0].GetComponent<GlobalMenuSettings>();
        


		//AudioSource asource = GetComponent<AudioSource>();
        //asource.volume = settings.volume / 3f;

		//AudioSource.PlayClipAtPoint(bulletSound, transform.position, settings.volume);

		//GetComponent<AudioSource> ().Play();
		
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

    private void OnTriggerEnter(Collider other)
    {
        Debug.Log("bullet collides" + other.name);
    }
}
