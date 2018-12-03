
#ifndef GameLogic_H
#define GameLogic_H
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include "Player.h"

class GameLogic {
public :

	
	void init();
	void update();
	Player p;
	Clock time;
	float timePassed;
	float offsetX = 0, offsetY = 0;
	String TileMap;

};

#endif