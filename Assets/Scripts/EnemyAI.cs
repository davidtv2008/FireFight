using System.Collections;
 using System.Collections.Generic;
 using UnityEngine;
 using UnityEngine.UI;
 public class EnemyAI : MonoBehaviour
 {
 
     public Transform Player;
    public GameObject fp;

    int MoveSpeed = 4;
     int shootDistance = 20;
     int followDistance = 40;

    private float health = 1f;

    public GameObject explotion;

    private float timeLeft = 2;


    public GameObject flarePrefab;

    void Start()
     {
        GameObject p = GameObject.Find("player");
        Player = p.GetComponent<Transform>();
 
     }

    void Update()
    {
        transform.LookAt(Player);

        //follow the player if he is within range
        if (Vector3.Distance(transform.position, Player.position) <= followDistance)
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

                    timeLeft = 2;
                }
            }
            else
            {
                transform.position += transform.forward * MoveSpeed * Time.deltaTime;
            }
        }
    }

    private void OnTriggerEnter(Collider other)
    {
        Debug.Log(other.name);
        if(other.name == "bulletPlayer(Clone)")
        {
            Debug.Log("enemy hit by bullet");
            health -= 0.4f;
        }
        else if(other.name == "grenade(Clone)")
        {
            health -= 1f;
        }
        else if(other.name == "BigExplosionBarrel(Clone)")
        {
            Debug.Log("hit by explosion barrel");
            health -= 1f;
        }

        if(health <= 0f)
        {
            Destroy(gameObject);
        }

        Debug.Log(health);

    }
}