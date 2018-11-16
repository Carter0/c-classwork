#include "Game.h"




Game::Game() {};
Game::~Game() {};

//rect that represents players image
//has to be global so we can update the posn of the image
SDL_Rect dest;


void Game::init(const char *title, int x, int y, int width, int height, bool fullScreen) {
	//intial posn of the player
	dest.h = 50;
	dest.w = 50;
	dest.x = 50;
	dest.y = 400;

	//full screen?
	int flags = 0;
	if (fullScreen) {
		flags = SDL_WINDOW_FULLSCREEN;
	}

	//if we initialized everything create a window
	if (SDL_Init(SDL_INIT_EVERYTHING) == 0) {

		window = SDL_CreateWindow(title, x, y, width, height,flags);

		//if window was created, create a renderer
		if (window) {
			renderer = SDL_CreateRenderer(window, -1, 0);
			//game is running
			stillRunning = true;
		
		}
		
		//Loading and drawing player's image
		SDL_Surface *tempSurf = IMG_Load("player.png");
		p.playerIm = SDL_CreateTextureFromSurface(renderer,tempSurf);
		//destroying it after as we dont need it anymore
		SDL_FreeSurface(tempSurf);
	}
	else {
		//game was not initialized properly
		stillRunning = false;
	}

}
//updates in accordance to certain events
void Game::update() {
	SDL_Event event;
	SDL_PollEvent(&event);

	//quit if closed
	if (event.type == SDL_QUIT) {
		stillRunning = false;
	}
	
	//key events handler
	else if (event.type == SDL_KEYDOWN) {

		switch (event.key.keysym.sym) {
		case SDLK_w:
			dest.y -= 10;
			break;
		case SDLK_s:
			dest.y += 10;
			break;
		case SDLK_a:
			dest.x -= 10;
			break;
		case SDLK_d:
			dest.x += 10;
			break;
		default:
			break;

		}
	}

	
	}


//renders platforms/player
void Game::render() {
	
	//make bakcground white
	SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
	//draw platforms
	drawRect();
	//draw player
	SDL_RenderCopy(renderer, p.playerIm, NULL, &dest);
	//output everything to renderer
	SDL_RenderPresent(renderer);


}
//destroy all objects in use and quit
void Game::clean() {
	SDL_DestroyWindow(window);
	SDL_DestroyRenderer(renderer);
	SDL_Quit();

}

//is game still running?
bool Game::running() {
	return stillRunning;
}


//draws platforms
void Game:: drawRect() {

	SDL_RenderClear(renderer);
	SDL_Rect r1, r2;
	r1.x = 100;//posn x
	r1.y = 400;//posn y
	r1.w = 250;//width
	r1.h = 30;//height
	SDL_SetRenderDrawColor(renderer, 255, 30, 145, 55);//rect color
	SDL_RenderFillRect(renderer, &r1); 

	//second platform
	r2.x = 350;
	r2.y = 200;
	r2.w = 150;
	r2.h = 30;
	SDL_SetRenderDrawColor(renderer, 255, 30, 145, 55);
	SDL_RenderFillRect(renderer, &r2);

}


