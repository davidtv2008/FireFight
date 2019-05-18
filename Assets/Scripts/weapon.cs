using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class weapon : MonoBehaviour {

	public Transform firePoint;

	public Transform minePoint;
	public GameObject flarePrefab;

	public GameObject minePrefab;

	public GameObject player;

    public GameObject explotion;

    public GameObject mineButtonText;

	public int numberBullets = 0;
	public int numberMines = 0;

    public AudioSource audioData;

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
        audioData.Play(0);

        Instantiate(flarePrefab,firePoint.position,firePoint.rotation);
        ParticleSystem ps = explotion.GetComponent<ParticleSystem>();
        ps.Play();
	}

    public void shootGrenade()
    {
        if(numberMines > 0)
        {
            numberMines -= 1;
            Instantiate(minePrefab, firePoint.position, firePoint.rotation);
            var text = mineButtonText.GetComponent<UnityEngine.UI.Text>();
            text.text = numberMines.ToString();
        }

    }
}
