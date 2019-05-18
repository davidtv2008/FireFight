using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class barrel : MonoBehaviour
{

    public GameObject explosion;
    public AudioSource audioData;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    private void OnTriggerEnter(Collider other)
    {
        //Debug.Log(other.name);
        if(other.name == "bulletPlayer(Clone)" || other.name == "bullet(Clone)")
        {
            //Debug.Log("explode");
            Explode();
        }
        else if(other.name == "grenade(Clone)")
        {
            Explode();
        }
    }

    void Explode()
    {
        Instantiate(explosion, transform.position,transform.rotation);
        var expObj = GameObject.Find("BigExplosionBarrel(Clone)");

        var exp = expObj.GetComponent<ParticleSystem>();
        exp.Play();

        audioData.Play(0);

        //rb.velocity = transform.forward * 0;


        Destroy(expObj, exp.main.duration);
        Destroy(gameObject);

    }
}
