
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
	bool isJumping = false;
	bool isFalling = false;
	float x = 0;
	float y = 0;
	float velocityX = 0;
	float velocityY = 0;
	float accelerationX = 0;
	float accelerationY = 0;
	float gravity = 2;



private:
	void move(float timePassed, int reflect, float direction, int mirror);

	Texture t;
	

};

#endif