#include "../include/GameLogic.h"
#include "SFML/Graphics.hpp"
#include <iostream>
using namespace sf;



void GameLogic::init(vector<Sprite> collisions, vector<Sprite> deathCollisions) {

	timePassed = time.getElapsedTime().asSeconds();
	time.restart();
	if (timePassed>100) {
		timePassed = 100;
	}
	 

	//adding in the collision data to the gamelogic class
	collisionData = collisions;
	//adding death collision data
	deathData = deathCollisions;   
}


void GameLogic::setPlPosnWinter() {
	p1.rectangle.setPosition(4981, 290);
	p2.rectangle.setPosition(5245, 350);
	p3.rectangle.setPosition(5486, 450);
	p4.rectangle.setPosition(5555, 260);
	p5.rectangle.setPosition(5747, 380);
	


}

void GameLogic::movePlsWinter() {
	p1.move(4981, 5091);
	p2.move(5245, 5355);
	p3.move(5486, 5596);
	p4.move(5555, 5705);
	p5.move(5747, 5857);


}

//functions checks if two floats are within the bounds of another
//+ or - eight
bool withInBounds(float fone, float ftwo){
	if(fone - ftwo < 8) {
		return true;
	} else {
		return false;
	}
}


void GameLogic::deathCollision() {
	FloatRect playerTemp = p.sprite.getGlobalBounds();
	float playerX = p.x;
	float playerY = p.y;
	int size = deathData.size();
	for(int i = 0; i < size; i++) { 
		FloatRect deathTemp = deathData.at(i).getGlobalBounds();
		Vector2f deathPosition = deathData.at(i).getPosition(); 

		//should work for the cactus, but not for the water
		if(playerTemp.intersects(deathTemp)) { 
			p.lockMovement();
		}



		//hard to test water code, because this is so computationally expensive, that the game lags. 
		// if(playerY < deathPosition.y  && playerX < deathPosition.x + (deathTemp.width/2) && playerX > deathPosition.x - (deathTemp.width/2)) {

		// }

		



	}

}

void GameLogic::collisionCode() {
	//TODO -> finish collision code
	FloatRect playerTemp = p.sprite.getGlobalBounds();
	float playerX = p.x;
	float playerY = p.y;
	int size = collisionData.size();
	for(int i = 0; i < size; i++) {
		FloatRect borderTemp = collisionData.at(i).getGlobalBounds();
		Vector2f mapPosition = collisionData.at(i).getPosition(); 
		if(playerTemp.intersects(borderTemp)) {
			//cout << "player position is " << playerY << endl;
			//cout << "thing position is " << mapPosition.y << endl;
			//cout << playerX + (playerTemp.width/2) << endl;
			//cout << collisionData.at(i).getPosition().x - (borderTemp.width/2) << endl;
			if(withInBounds(playerX + (playerTemp.width/2), mapPosition.x - (borderTemp.width/2))) {
			// && playerY > mapPosition.y + (borderTemp.height/2) && playerY < mapPosition.y - (borderTemp.height/2)) {
				//cout << "approaching from the right" << endl;
				//p.lockMovement();
				//2. move the player back to the left -> this is trickier than I thought because just calling the move function without 
				//	is causing weird behaviour

				//3. unlock movement
				//p.unlockMovement();	
			}
		}
	}
}



void GameLogic::update() {

	collisionCode();
	deathCollision();

	if (Keyboard::isKeyPressed(Keyboard::Left)) {
		p.moveLeft(timePassed);
	}
	if (Keyboard::isKeyPressed(Keyboard::Right)) {
	
		p.moveRight(timePassed);
	}
	if (Keyboard::isKeyPressed(Keyboard::Space)) {
	
		if (p.sprite.getPosition().y >= 470) {
			p.velocityX = 1;
			p.isJumping = true;
			p.isFalling = false;
			p.velocityY = -14;
		}
	}
}




