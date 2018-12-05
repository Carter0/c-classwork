#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>
#include "../include/Player.h"
#include "../include/GameLogic.h"
#include "../include/Map.h"
#include "../include/Platforms.h"
#include <iostream>
#include <vector>
using namespace std;

///TODO 
//1 more maps  - Yasmin
///Collision with tiles/enemise - Carter if they fall on cactus or water they die
///Life - Carter
//ScrollingX Map -Yasmin
//ScrollingY Map - Carter

int main() {


	Platforms pl;
	GameLogic g;
	g.p.sprite.setPosition(10,470);
	RenderWindow window(VideoMode(1000, 600), "Desert");
	//RenderWindow window(VideoMode(600, 600), "Winter");
	Event event;
	Map map;
	
	g.setPlPosnWinter();
	//(10, 870) - posn for desert
	//
	window.setFramerateLimit(24);
	while (window.isOpen()) {

		while (window.pollEvent(event)) {
			if (event.type == Event::Closed) {
				window.close();
			}
		}

		
		//map.setViewDesert(window, g.p);
		
		
		g.p.jump(0);
		g.update();
		window.clear(Color::White);
		map.drawWinter(window);
		map.setViewWinter(window, g.p);
		//window.draw(pl.rectangle);
		g.movePlsWinter();
		window.draw(g.p.sprite);
		window.display();

		vector<Sprite> collisionData = map.getMapColliders();
		vector<Sprite> deathData = map.getDeathColliders();
		g.init(collisionData, deathData);

		//cout << map.getMapColliders().size() << endl;

		
		// int size = map.getMapColliders().size();
		// for(int i = 0; i < size; i++) {
		// 	cout << map.getMapColliders().at(i).getPosition().x << endl;
		// }





	}

	return 0;
}






