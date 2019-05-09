﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class weapon : MonoBehaviour {

	public Transform firePoint;

	public Transform minePoint;
	public GameObject flarePrefab;

	public GameObject minePrefab;

	public GameObject player;

	public int numberBullets = 0;
	public int numberMines = 0;
	
	// Update is called once per frame
	void Update () {

	}

	void placeMine(){
		//shooting logic
		numberMines -= 1;
		Instantiate(minePrefab,minePoint.position,minePoint.rotation);

	}

	public void shootBullet()
	{

		numberBullets -= 1;
		Instantiate(flarePrefab,firePoint.position,firePoint.rotation);  
	}

    public void shootGrenade()
    {
        //shooting logic
        numberBullets -= 1;
        Instantiate(minePrefab, firePoint.position, firePoint.rotation);
    }
}
