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
class GameLogic {
public :

	
	void init();
	void update();
	void setPlPosnWinter();
	void movePlsWinter();
	bool collison(int x, int y);
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
    
    

};

#endif
