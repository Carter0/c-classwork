#include "stdafx.h"
#include "GameLogic.h"
#include <SFML/Graphics.hpp>
#include <iostream>
using namespace sf;



void GameLogic::init() {

timePassed = time.getElapsedTime().asSeconds();
time.restart();
if (timePassed>100) timePassed = 100;
    
    map.

    
    
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



void GameLogic::update() {

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




