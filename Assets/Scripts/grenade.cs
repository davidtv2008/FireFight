using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class grenade : MonoBehaviour
{
    public float speed = 20f;
    public GameObject explosion;
    public Rigidbody rb;
    public GameObject lightObj;
    public float timeLeft = 5;

    private int loopCounterFix = 0;

    private float x;
    private float y;

    //public Flare flare;
    // Use this for initialization
    public AudioSource audioData;

    void Start()
    {
        rb.velocity = transform.forward * speed;

        //GetComponent<AudioSource> ().playOnAwake = true;



        //GameObject[] objs = GameObject.FindGameObjectsWithTag("globalSettings");
        //GlobalMenuSettings settings = objs[0].GetComponent<GlobalMenuSettings>();

        //GetComponent<AudioSource> ().clip = bulletSound;


        //AudioSource asource = GetComponent<AudioSource>();
        //asource.volume = settings.volume / 3f;

        //AudioSource.PlayClipAtPoint(bulletSound, transform.position, settings.volume);

        //GetComponent<AudioSource> ().Play();

    }

    void Update()
    {
        timeLeft -= Time.deltaTime;



        //start the 5 second countdown for each individual bullet fired, after 5 seconds object will be destroyed.
        if (timeLeft <= 0)
        {
            timeLeft = 0;
            loopCounterFix += 1;



            if(loopCounterFix == 1)
            {
                GameObject player1 = GameObject.Find("player1");





                //weapon wp = player1.GetComponent<weapon>();

                //GameObject[] objs = GameObject.FindGameObjectsWithTag("globalSettings");
                //GlobalMenuSettings settings = objs[0].GetComponent<GlobalMenuSettings>();

                //if(wp.numberBullets < settings.bullets){
                //  wp.numberBullets += 1;

                //}
                var light = lightObj.GetComponent<Light>();
                light.type = LightType.Directional;
                //light.type = LightType.Point;

                light.range = 100;
                light.intensity = 1;

                //access lights rotation vector


                var lightRot = lightObj.GetComponent<Transform>();
                lightRot.transform.Rotate(new Vector3(45, 0, 0));
                Debug.Log(lightRot.rotation);

                Explode();
            }

            //Destroy(gameObject);
        }


    }

    void Explode()
    {
        var exp = explosion.GetComponent<ParticleSystem>();
        exp.Play();

        audioData.Play(0);


        Destroy(explosion, exp.main.duration);
        Destroy(gameObject, exp.main.duration);

    }

    private void OnTriggerEnter(Collider other)
    {
        Debug.Log("bullet collides" + other.name);
    }
}
