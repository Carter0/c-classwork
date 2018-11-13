#include <SDL2/SDL.h>
#include <iostream>
#include <stdio.h>
#include "Game.h"
using namespace std;

//create game obj.
Game *game = nullptr;
int main(int argc, char *argv[]) {

	//initialize it
	game = new Game();
	game->init("First", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 900, 500, false);

	//keep it going until we quit
	while (game->running()) {
		game->update();
		game->render();

	}

	//clean up after
	game->clean();
	return 0;

}

