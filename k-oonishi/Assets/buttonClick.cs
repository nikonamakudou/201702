using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

public class buttonClick : MonoBehaviour {


	// Use this for initialization
	public void SelectStage0() {
		SceneManager.LoadScene ("Question");
	}

	// Use this for initialization
	public void SelectStage1() {
		SceneManager.LoadScene ("Main");
	}

//	// Use this for initialization
//	public void SelectStage2() {
//		SceneManager.LoadScene ("Main");
//	}

	// Use this for initialization
	public void SelectStage3() {
		SceneManager.LoadScene ("True");
	}

	// Use this for initialization
	public void SelectStage4() {
		SceneManager.LoadScene ("False");
	}

	// Update is called once per frame
//	void Update () {
	
//	}
}