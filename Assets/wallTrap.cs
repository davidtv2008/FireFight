using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class wallTrap : MonoBehaviour
{
    //firepoint
    public GameObject fp;
    private float timeLeft = 3;
    public GameObject explotion;

    public Transform Player;
    int shootDistance = 30;

    //bullet
    public GameObject flarePrefab;
    // Start is called before the first frame update
    void Start()
    {
        GameObject p = GameObject.Find("player");
        Player = p.GetComponent<Transform>();
    }

    // Update is called once per frame
    void Update()
    {
        timeLeft -= Time.deltaTime;

        if (Vector3.Distance(transform.position, Player.position) <= shootDistance)
        {
            //Debug.Log("Shot at player");
            //Here Call any function U want Like Shoot at here or something
            //start the 5 second countdown for each individual bullet fired, after 5 seconds object will be destroyed.
            if (timeLeft <= 0)
            {
                Instantiate(flarePrefab, fp.transform.position, fp.transform.rotation);
                ParticleSystem ps = explotion.GetComponent<ParticleSystem>();
                ps.Play();

                timeLeft = 3;
            }
        }

    }
}
