using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class rotateItem : MonoBehaviour
{
    public float rotationSpeed = 5;
    private float x;
    public GameObject player;
    public GameObject item;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        transform.Rotate(new Vector3(0, 10, 0) * Time.deltaTime * rotationSpeed);

    }

    public void OnTriggerEnter(Collider other)
    {
        if(other.name == "player1")
        {
            Debug.Log("player collides");
            if (item.name == "mineItem")
            {
                //once collided with player, access players weapons mine and add bullet
                var weaponMine = player.GetComponent<weapon>();
                weaponMine.numberMines += 1;
                Destroy(item);
                GameObject itemLight = GameObject.Find("itemLight");
                Destroy(itemLight);


            }
            else if (item.name == "shieldItem")
            {
                Destroy(item);
                GameObject itemLight2 = GameObject.Find("itemLight2");
                Destroy(itemLight2);
            }
        }
    }
}
