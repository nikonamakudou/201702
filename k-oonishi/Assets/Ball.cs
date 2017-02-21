using UnityEngine;
using System.Collections;

public class Ball : MonoBehaviour {

	private float speed = 12.0f;
//	private float before_x = 0;


//	void OnCollisionEnter(Collision collision) {
		//衝突判定
//		if (collision.gameObject.tag == "Racket") {
			//相手のタグがRacketならば
//			Debug.Log("接触" + before_x.ToString() + ":" + gameObject.transform.position.x.ToString());
//			if (before_x - gameObject.transform.position.x <= 0.01f || before_x - gameObject.transform.position.x >= -0.01f){
//				this.GetComponent<Rigidbody>().AddForce(
//					(transform.forward + transform.right + new Vector3(10.0f, 0f, 0f)),
//					ForceMode.Impulse);
//			}
				
//		}
//	}


	// Use this for initialization
	void Start () {
		//以下を追加
		this.GetComponent<Rigidbody>().AddForce(
			transform.forward * speed,
//			(transform.forward + transform.right) * speed,
			ForceMode.VelocityChange);

	}

	// Update is called once per frame
	void Update () {

	}
}


	// Use this for initialization
//	void Start () {

//		this.GetComponent<Rigidbody>().AddForce(
//			(transform.forward + transform.right) * speed,
//			new Vector3(0.0f, 0.0f, 5.0f),
//			ForceMode.VelocityChange);
	
//	}
	
	// Update is called once per frame
//	void Update () {
//		before_x = gameObject.transform.position.x;

//	}
