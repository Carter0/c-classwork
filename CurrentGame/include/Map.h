#pragma once 
#ifndef Map_H
#define Map_H


#include <SFML/Graphics.hpp>
#include <iostream>
#include "Player.h"
#include "Cell.h"
#include <vector>


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
    std::vector<Sprite> getMapColliders();
  
private:
    //contains all the sprites for every object in the map that the player is colliding with.
    std::vector<Sprite> mapColliders;
    //so, I think you don't want to continually draw sprites, so I am going to add a boolean to only do it once
    bool drawSprites = true;


};

#endif
