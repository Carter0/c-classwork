//#include "stdafx.h"
#include "Player.h"
#include <iostream>
using namespace sf;

	Player::Player() {
		t.loadFromFile("Santa-black.png");
		sprite.setTexture(t);
		sprite.setTextureRect(IntRect(4, 74, 34, 56));
		sprite.setPosition(100, 500);
	
	}
	

	void Player::moveLeft( float timePassed) {
		Player::move(timePassed, 35, -100, -1);}


	void Player::moveRight(float timePassed) {
		Player::move(timePassed, 0, 100, 1); }

	
	

	void Player::move(float timePassed, int reflect, float direction, int mirror) {	
		
	

		if (mirror == -1 ){
			
			if (sprite.getPosition().x <= 0) { sprite.setPosition(0, sprite.getPosition().y); }

			else { sprite.move(direction * timePassed - 4, 0); }
		}
		else {
		
		//	if (sprite.getPosition().x >= 1140) { sprite.setPosition(1140, sprite.getPosition().y); }

			sprite.move(direction * timePassed + 4, 0); 
		}


		currentImage += 1;
		if (currentImage > 2) {
			currentImage = 0;
		}
		if (currentImage == 0)
			sprite.setTextureRect(IntRect(4 + reflect, 72, 34 *mirror, 56));
		if (currentImage == 1)
			sprite.setTextureRect(IntRect(52 + reflect, 72, 34 * mirror, 56));
		if (currentImage == 2)
			sprite.setTextureRect(IntRect(100 + reflect, 74, 34 * mirror , 56));
	}

	void Player::jump(float timePassed) {
		////////////////////////TODOOOOOOOOOOOOOOOOOOOO
	}
