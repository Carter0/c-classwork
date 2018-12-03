#ifndef Map_H
#define Map_H

//#include "stdafx.h"
#include <SFML/Graphics.hpp>
#include <iostream>
#include "Player.h"
#include "GameLogic.h"

class Map {
	public :
  
	void drawDesert(sf::RenderWindow &window);
	void drawWinter(sf::RenderWindow &window);
	void drawGrave(sf::RenderWindow &window);
	void setViewDesert(sf::RenderWindow &window, GameLogic & g);
	void setViewWinter(sf::RenderWindow &window, GameLogic & g);
	void setViewGrave(sf::RenderWindow &window);
};

#endif
