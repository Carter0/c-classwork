#pragma once 
#ifndef GameLogic_H
#define GameLogic_H
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include "Player.h"
#include "Map.h"
#include <ios>
#include "Platforms.h"
#include <vector>
#include "Cell.h"
using namespace sf;
using namespace std;
class GameLogic {
public :

	
	void init(vector<Sprite> collisions, vector <Sprite> deathCollisions);
	void update();
	void setPlPosnWinter();
	void movePlsWinter();
	void collisionCode();
	void deathCollision();
    bool withInBounds(float x, float y);
	std::vector<Cell> mapList;
	Player p;
	Map map;
	Clock time;
	float timePassed;
	Platforms p1;
	Platforms p2;
	Platforms p3;
	Platforms p4;
	Platforms p5;


private:
	vector <Sprite> collisionData;
    vector <Sprite> deathData;
    

};

#endif
