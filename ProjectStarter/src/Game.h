#ifndef Game_hpp
#define Game_hpp
#endif // !Game_hpp



#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <iostream>
#include <stdio.h>
#include <vector>
#include "Player.h"
#include "Platform.h"
#include <cstring>


using namespace std;
class Game {
public:
	Game();
	~Game();

	//initialize the window and everything in it
	void init(const char *title, int x, int y, int width, int height, bool fullScreen);
	//updates if any events occured
	void update();
	//renders images
	void render();
	//destroys everything after we're done
	void clean();
	//checks if the game is still running
	bool running();

private:
	void drawRect();
	SDL_Window * window;
	SDL_Renderer *renderer;
	vector<Platform> p1;
	Player p;
	bool stillRunning;
};
