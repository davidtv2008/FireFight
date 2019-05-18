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
        player = GameObject.Find("player");
        
    }

    // Update is called once per frame
    void Update()
    {
        //transform.Rotate(new Vector3(0, 10 * Time.deltaTime * rotationSpeed, 0));
        transform.localRotation *= Quaternion.AngleAxis(rotationSpeed * Time.deltaTime, Vector3.up);
        transform.localRotation *= Quaternion.AngleAxis(rotationSpeed * Time.deltaTime, Vector3.left);

    }

    public void OnTriggerEnter(Collider other)
    {
        if(other.name == "player")
        {
            Debug.Log("player collides");
            if (item.name.Contains("mineItem"))
            {
                //once collided with player, access players weapons mine and add bullet
                var weaponMine = player.GetComponent<weapon>();
                weaponMine.numberMines += 6;
                Destroy(item);
                GameObject itemLight = GameObject.Find("itemLight");
                Destroy(itemLight);


            }
            else if (item.name.Contains("shieldItem"))
            {
                Destroy(item);
                GameObject itemLight2 = GameObject.Find("itemLight2");
                Destroy(itemLight2);
            }

            else if (item.name.Contains("healthItem"))
            {
                Destroy(item);
                GameObject itemLight3 = GameObject.Find("itemLight3");
                Destroy(itemLight3);
            }
        }
    }
}
