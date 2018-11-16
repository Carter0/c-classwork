#include "SDL.h"
#include "SDL_image.h"
#include <iostream>
#include <stdio.h>
#include <vector>



#ifndef PLAYER_H
#define PLAYER_H

using namespace std;
class Player {
private:
	SDL_Texture *playerIm;
	SDL_Rect playerCanvas;

	bool isJumping = false;

	int maxJumpHeight = 100;
	bool isFalling = false;
	int currentJumpHeight = 0;
	int m_screen_width = 0;
	int m_screen_height = 0;

private: 

	void init();
	void updatePosition();
public: 
	Player(SDL_Renderer &renderer, int screen_width,int screen_height);
	void update();
	void render(SDL_Renderer &renderer);
	void moveLeft();
 void moveRight();
 void jump();
};
#endif
