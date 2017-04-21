using UnityEngine;
using System.Collections;

public class Brick : MonoBehaviour {
	public AudioClip crack;
	public Sprite[] hitSprites;
	public static int breakableCount = 0;

	private int timesHit;
	private LevelManager levelManager;
	private bool isBreakable;

	// Use this for initialization
	void Start () {
		timesHit = 0;
		levelManager = GameObject.FindObjectOfType<LevelManager>();
		isBreakable = (this.tag == "Breakable");
		if(isBreakable){
			breakableCount++;
		}
	}

	void OnCollisionExit2D(Collision2D trigger){
		if(isBreakable){
			HandleHits();
		}
	}

	void HandleHits(){
		timesHit++;
		AudioSource.PlayClipAtPoint(crack, transform.position);
		if(timesHit >= hitSprites.Length + 1){ 
			breakableCount--;
			levelManager.BrickDestroyed();
			Destroy(gameObject); 
		}
		else{
			LoadSprites();
		}
	}

	void LoadSprites(){
		int spriteIndex = timesHit - 1;
		this.GetComponent<SpriteRenderer>().sprite = hitSprites[spriteIndex];
	}
}

