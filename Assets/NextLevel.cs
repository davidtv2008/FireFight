using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class NextLevel : MonoBehaviour
{
    public GameObject pauseMenu;
    public GameObject pauseMenuText;
    public GameObject nextLevelButton;
    public GameObject resumeButton;


    private void OnTriggerEnter(Collider obj)
    {
        GameObject[] pausableObj = GameObject.FindGameObjectsWithTag("pausable");
        foreach (GameObject x in pausableObj)
        {
            x.SetActive(false);
        }


        //if player has reached goal collider
        if (obj.name == "player")
        {
            pauseMenu.SetActive(true);

            var text = pauseMenuText.GetComponent<UnityEngine.UI.Text>();
            text.text = "LEVEL COMPLETED";
            resumeButton.SetActive(false);
            nextLevelButton.SetActive(true);


            /*
            if (gameObject.name == "Goal1")
            {
                SceneManager.LoadScene("Level 2");
            }
            else if (gameObject.name == "Goal2")
            {
                SceneManager.LoadScene("Level 3");
            }
            */
        }
        
    }
}
