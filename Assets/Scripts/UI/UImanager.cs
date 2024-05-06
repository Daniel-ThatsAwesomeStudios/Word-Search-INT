using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class UImanager : MonoBehaviour
{
    public void BackToMenuScene()
    {
        Debug.Log("Loading Menu");
        SceneManager.LoadScene(0);
    }
}
