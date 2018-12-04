#pragma once 
#include "stdafx.h"
#include "Platforms.h"

using namespace sf;

void Platforms::move(int startX, int endX) {
    static Texture tileS;
    tileS.loadFromFile("2w.png");
	rectangle.setTexture(tileS);
	rectangle.setTextureRect(sf::IntRect(0,10,128, 32));



	if (rectangle.getPosition().x < endX && dir==1) {

		rectangle.move(2.5, 0);

	}
	if (rectangle.getPosition().x == endX && dir==1) {
		dir = 0;	
	}
	if (dir == 0) {

		if (rectangle.getPosition().x > startX && dir == 0) {
			rectangle.move(-2.5, 0);
		}
		else { dir = 1; }
	}

	


}