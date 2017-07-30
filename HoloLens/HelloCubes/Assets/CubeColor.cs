using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CubeColor : MonoBehaviour {

    private Color originalColor;
    private Vector3 originalVector;

	// Use this for initialization
	void Start () {

        var newColor = this.GetColor();

        var cube = this.GetComponent<Renderer>();

        cube.material.color = newColor;        

        this.originalColor = newColor;
        this.originalVector = this.transform.position;
    }
	
	// Update is called once per frame
	void Update () {
		
	}

    void OnSelect()
    {
        var cube = this.GetComponent<Renderer>();

        cube.material.color = Color.red;
    }

    void OnReset()
    {
        var cube = this.GetComponent<Renderer>();

        cube.material.color = originalColor;        
    }

    void OnResetBlock()
    {
        this.transform.position = this.originalVector;
    }

    private Color GetColor()
    {
        var r = Random.Range(0.0f, 1.0f);
        var g = Random.Range(0.0f, 1.0f);
        var b = Random.Range(0.0f, 1.0f);

        return new Color(r, g, b);
    }
}
