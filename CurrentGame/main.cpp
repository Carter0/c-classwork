//#include "stdafx.h"
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>
#include "Player.h"
#include "GameLogic.h"
#include "Map.h"
#include "Platforms.h"

///TODO 
///moving platforms - Yasmin
///Enemies  - Yasmin
//1 more maps  - Yasmin
//Jumping -Carter 
///Collision with tiles/enemise - Carter if they fall on cactus or water they die
///Life - Carter
//ScrollingX Map -Yasmin
//ScrollingY Map - Carter

int main() {
	

	Platforms pl;
	GameLogic g;

	RenderWindow window(VideoMode(700, 600), "Desert");
	//RenderWindow window(VideoMode(600, 600), "Winter");
	Event event;
	Map map;
	pl.rectangle.setPosition(20, 300);
	
	//(10, 870) - posn for desert
	//
	window.setFramerateLimit(24);
	while (window.isOpen()) {
		
		while (window.pollEvent(event)) {
			if (event.type == Event::Closed) {
				window.close();
			}
		}
	
		g.init();
		map.setViewDesert(window, g);
		
		pl.move();
		g.update();
		window.clear(Color::White);
		map.drawDesert(window);
		//map.setViewWinter(window, g);
		//window.draw(pl.rectangle);
		window.draw(g.p.sprite);
		window.display();

	}

	return 0;
}






