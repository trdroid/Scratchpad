using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CubeColor : MonoBehaviour {

	// Use this for initialization
	void Start () {
        var r = Random.Range(0.0f, 1.0f);
        var g = Random.Range(0.0f, 1.0f);
        var b = Random.Range(0.0f, 1.0f);

        var newColor = new Color(r, g, b);
        this.GetComponent<Renderer>().material.color = newColor;
	}
	
	// Update is called once per frame
	void Update () {
		
	}
}
