#pragma once 
#ifndef Map_H
#define Map_H

#include "stdafx.h"
#include <SFML/Graphics.hpp>
#include <iostream>
#include "Player.h"
#include "Cell.h"


class Map {
	public :
  
	bool collisionS(Player & p);
	void drawDesert(sf::RenderWindow &window);
	void drawWinter(sf::RenderWindow &window);
	void drawGrave(sf::RenderWindow &window);
	void setViewDesert(sf::RenderWindow &window, Player & p);
	void setViewWinter(sf::RenderWindow &window, Player & p);
	void setViewGrave(sf::RenderWindow &window);
    
    //returns the map collision data
    //TODO: implement this method
    vector<Sprite> getMapColliders();
  
private:
    //contains all the sprites for every object in the map that the player is colliding with.
    //TODO: add all the sprites into this vector.
    vector<Sprite> mapColliders;
};

#endif
