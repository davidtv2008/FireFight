using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class NextLevel : MonoBehaviour
{
    private void OnTriggerEnter(Collider obj)

    {
        if (obj.name == "player")

        { SceneManager.LoadScene("Level 2"); }

    }
}
