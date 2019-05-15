using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HealthBar : MonoBehaviour {

	// Use this for initialization
	public GameObject player;

	void Start () {

		Transform bar = transform.Find("Bar");
		Player playerComp = player.GetComponent<Player>();
		bar.localScale = new Vector3(1f,playerComp.health,1f);

        Transform shieldBar = transform.Find("BarShield");
        shieldBar.localScale = new Vector3(1f, playerComp.shieldLevel, 1f);
		
	}
	
	// Update is called once per frame
	void Update () {
		Transform bar = transform.Find("Bar");
		Player playerComp = player.GetComponent<Player>();
		bar.localScale = new Vector3(1f,playerComp.health,1f);
        bar.localPosition = new Vector3(0f, playerComp.healthOffset, 0f);
        //Debug.Log(bar.localScale);

        if (playerComp.shield)
        {
            Transform shieldBar = transform.Find("BarShield");
            shieldBar.localScale = new Vector3(1f, playerComp.shieldLevel, 1f);
            shieldBar.localPosition = new Vector3(0f, playerComp.shieldOffset, 0f);
        }

    }
}
