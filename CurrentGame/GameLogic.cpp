//#include "stdafx.h"
#include "GameLogic.h"
#include <iostream>
using namespace sf;



void GameLogic::init() {

timePassed = time.getElapsedTime().asSeconds();
time.restart();
//timePassed = timePassed / 900;
//if (timePassed>20) timePassed = 20;


}



void GameLogic::update() {

	if (Keyboard::isKeyPressed(Keyboard::Left)) {
		p.moveLeft(timePassed);
	}
	if (Keyboard::isKeyPressed(Keyboard::Right)) {
		p.moveRight(timePassed);
	}
	if (Keyboard::isKeyPressed(Keyboard::Space)) {
	}

}





