using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player : MonoBehaviour
{
    public float health = 1f;
    public float healthOffset = 0f;
    public int lives = 3;
    private bool endGame = false;
    private bool pause = false;
    public GameObject livesText;
    private bool colorChange = false;
    public bool shield = false;
    public float shieldLevel = 1f;
    public float shieldOffset = 0f;

    //gameobject list of things to pause
    public GameObject[] pausableObj;

    //create a list for storing items the player picks up
    public List<System.String> inventory;
    public GameObject[] item;

    public GameObject healthBar;
    public GameObject shieldBar;
    public SpriteRenderer sr;
    private int colorChangeCounter = 0;

    public GameObject bulletButtonText;
    public GameObject mineButtonText;

    // Start is called before the first frame update
    void Start()
    {
        inventory = new List<System.String>();

        GameObject[] objs = GameObject.FindGameObjectsWithTag("globalSettings");
        GlobalMenuSettings settings = objs[0].GetComponent<GlobalMenuSettings>();

        weapon playerWeapon = GetComponent<weapon>();
        playerWeapon.numberBullets = settings.bullets;

        lives = settings.player_lives;

        var text = livesText.GetComponent<UnityEngine.UI.Text>();
        text.text = "x " + lives;


    }

    // Update is called once per frame
    void Update()
    {
        healthBar = GameObject.Find("BarSprite");

        pausableObj = GameObject.FindGameObjectsWithTag("pausable");


        //revert healthbar back to green
        if (colorChange)
        {
            colorChangeCounter++;

            if (colorChangeCounter == 5)
            {
                colorChangeCounter = 0;
                Color newColor;

                newColor.r = 0;
                newColor.g = 255;
                newColor.b = 0;
                newColor.a = 1f;

                
                sr.color = newColor;
                colorChange = false;
            }
        }

    }

    void activateItem(System.String name, Vector2 moveVector)
    {

        //activate beacon on character
        /*
        if (name == "beacon" || name == "beacon(Clone)")
        {
            go = Instantiate(item[0], rb2d.position, Quaternion.identity);
            go.transform.parent = gameObject.transform;
        }

        //need to finish code to activate other items
        if (name == "shield" || name == "shield(Clone)")
        {
            GameObject go = Instantiate(item[1], rb2d.position, Quaternion.identity);
            go.transform.parent = gameObject.transform;
            go.transform.localScale += new Vector3(0.3f, 0.3f, 0);
            shield = true;

        }
        */      
        if (name == "landmine" || name == "landmine(Clone)")
        {

            weapon playerWeapon = GetComponent<weapon>();
            playerWeapon.numberMines += 3;

        }

        //      Debug.Log(name);


        inventory.RemoveAt(0);
    }

    public void mainMenu()
    {
        if (!endGame)
        {
            if (!pause)
            {
                pause = true;
                foreach (GameObject x in pausableObj)
                {
                    x.SetActive(false);
                }

                //pausableObj = null;

            }
            else
            {
                //pausableObj = GameObject.FindGameObjectsWithTag("pausable");
                Debug.Log("restore items");
                pause = false;
                int count = 0;
                foreach (GameObject x in pausableObj)
                {
                    Debug.Log(count);
                    x.SetActive(true);
                    count++;
                }
                //pausableObj = null;
            }

        }
        else
        {
            //game over menu
        }

        Debug.Log("main menu");
    }

    public void fire()
    {
        Debug.Log("Fire weapon");
    }

    public void placeMine()
    {
        Debug.Log("Place Mine");
    }

    private void OnTriggerEnter(Collider obj)
    {

        //Debug.Log(obj.name);

        if (obj.name == "bullet(Clone)")
        {

            if (!shield)
            {
                //Debug.Log("hit by bullet");
                health -= 0.1f;
                healthOffset -= 6.6f;

                if (health <= 0f)
                {
                    health = 1f;
                    healthOffset = 0;
                    lives -= 1;

                    var text = livesText.GetComponent<UnityEngine.UI.Text>();
                    text.text = "x " + lives;

                    //game over setup here
                    if (lives == 0)
                    {
                        endGame = true;
                        Debug.Log("Game Over");
                        mainMenu();
                    }

                }
            }
            else
            {
                shieldLevel -= 0.25f;
                shieldOffset -= 16.5f;

                if (shieldLevel <= 0)
                {
                    shield = false;
                    shieldBar.SetActive(false);
                }
            }
        }
        else if (obj.name == "BigExplosionBarrel(Clone)")
        {
            if (!shield)
            {
                //Debug.Log("hit by bullet");
                health -= 0.2f;
                healthOffset -= 13.2f;

                if (health <= 0f)
                {
                    health = 1f;
                    healthOffset = 0;
                    lives -= 1;

                    var text = livesText.GetComponent<UnityEngine.UI.Text>();
                    text.text = "x " + lives;

                    //game over setup here
                    if (lives == 0)
                    {
                        endGame = true;
                        Debug.Log("Game Over");
                        mainMenu();
                    }

                }
            }
            else
            {
                shieldLevel -= 0.50f;
                shieldOffset -= 33f;

                if (shieldLevel <= 0)
                {
                    shield = false;
                    shieldBar.SetActive(false);
                }
            }

        }
        else if (obj.name == "FlameThrower" || obj.name == "FlameThrower(Clone)")
        {
            if (!shield)
            {
                //Debug.Log("hit by bullet");
                health -= 0.2f;
                healthOffset -= 13.2f;

                if (health <= 0f)
                {
                    health = 1f;
                    healthOffset = 0;
                    lives -= 1;

                    var text = livesText.GetComponent<UnityEngine.UI.Text>();
                    text.text = "x " + lives;

                    //game over setup here
                    if (lives == 0)
                    {
                        endGame = true;
                        Debug.Log("Game Over");
                        mainMenu();
                    }

                }
            }
            else
            {
                shieldLevel -= 0.50f;
                shieldOffset -= 33f;

                if (shieldLevel <= 0)
                {
                    shield = false;
                    shieldBar.SetActive(false);
                }
            }

        }

        if (obj.name.Contains("mineItem"))
        {
            Debug.Log("Colleted mine item");
            //Debug.Log("substring " + obj.name.Substring(0, 8));
            weapon playerWeapon = GetComponent<weapon>();
            //Debug.Log("collid by item");
            var text = mineButtonText.GetComponent<UnityEngine.UI.Text>();
            text.text = playerWeapon.numberMines.ToString();

        }

        if (obj.name.Contains("shieldItem"))
        {
            //Debug.Log("collid with shield");
            shield = true;


            shieldBar.SetActive(true);
            shieldLevel = 1f;
            shieldOffset = 0f;
        }

        if(obj.name.Contains("healthItem"))
        { 
            health += 0.1f * 3;
            healthOffset += 6.6f * 3;

            if(health >= 1)
            {
                health = 1f;
                healthOffset = 0;
            }

        }
    }
}
