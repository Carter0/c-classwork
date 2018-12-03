#ifndef Platforms_H
#define Platforms_H
#include <SFML/Graphics.hpp>#pragma once
using namespace sf;

class Platforms {
public:
	Texture t;
	RectangleShape rectangle; 

	void move();



};

#endif