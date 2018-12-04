#pragma once 
#ifndef Platforms_H
#define Platforms_H
#include <SFML/Graphics.hpp>
using namespace sf;

class Platforms {
public:


	Sprite rectangle;

	int dir = 1;
	void move(int startX, int endX);



};

#endif