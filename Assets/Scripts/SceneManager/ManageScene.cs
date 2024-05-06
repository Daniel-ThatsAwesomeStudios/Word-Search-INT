using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class ManageScene : MonoBehaviour
{
    public void PlayGameButton()
    {
        Debug.Log("Game Scene Loading");
        //SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex + 1);
        SceneManager.LoadScene("GameScene 1");
    }

    public void BackToMenuScene()
    {
        Debug.Log("Loading Menu");
        SceneManager.LoadScene(0);
    }

    public void ExitButton()
    {
        Application.Quit();
        Debug.Log("Quitting Game");
    }
}
