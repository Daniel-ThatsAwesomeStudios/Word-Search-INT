using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class UImanager : MonoBehaviour
{
    public GameObject settingspanel;
    public void BackToMenuScene()
    {
        Debug.Log("Loading Menu");
        SceneManager.LoadScene(0);
    }
    public void SettingsButton()
    {
        settingspanel.SetActive(true);
    }
}
