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
    //returns all the sprites where the player dies if they touch them
    std::vector<Sprite> getDeathColliders();
  
private:
    //contains all the sprites for every object in the map that the player is colliding with.
    std::vector<Sprite> mapColliders;
    //a vector for all the sprites where the player dies if they touch them
    std::vector<Sprite> deathColliders;


};

#endif
