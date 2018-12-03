
#ifndef Player_H
#define Player_H
#include <SFML/Graphics.hpp>
using namespace sf;

class Player {
public:
	Sprite sprite;
	Player();
	void moveLeft(float timePassed);
	void moveRight(float timePassed);
	void jump(float timePassed);
	float currentImage = 0;

	






private:
	void move(float timePassed, int reflect, float direction, int mirror);

	Texture t;
	

};

#endif