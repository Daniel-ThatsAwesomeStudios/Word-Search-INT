using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using UnityEngine.SceneManagement;

public class Timer : MonoBehaviour
{
    [SerializeField] float timeRemaining;
    [SerializeField] TMP_Text timeText;
    [SerializeField] bool timeIsRunning;

    private void Start()
    {
        timeIsRunning = true;
    }

    private void Update()
    {
        if (timeIsRunning)
        {
            if(timeRemaining > 0)
            {
                timeRemaining -= Time.deltaTime;
                TimeToDisplay(timeRemaining);
            }
        }
        if(timeRemaining <= 2)
        {
            SceneManager.LoadScene(0);
        }
    }

    public void TimeToDisplay(float timeToDisplay)
    {
        timeToDisplay -= 1;
        float minute = Mathf.FloorToInt(timeToDisplay / 60);
        float second = Mathf.FloorToInt(timeToDisplay % 60);
        timeText.text = string.Format("{0:00}:{1:00}", minute, second);
    }

}
