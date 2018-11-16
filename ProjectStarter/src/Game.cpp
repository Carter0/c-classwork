#include "Game.h"

Game::Game() {

};
Game::~Game() {};

const int Game::getHeight() {
    return height;
}

const int Game::getWidth() {
    return width;
}


//rect that represents players image
//has to be global so we can update the posn of the image


void Game::init(const char *title, int x, int y, int _width, int _height, bool fullScreen) {


    width = _width;
    height = _height;
	
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
		
		p = new Player(*renderer,width,height);
		//destroying it after as we dont need it anymore
	
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

	this->p->update();

	//quit if closed
	if (event.type == SDL_QUIT) {
		stillRunning = false;
	}

	//key events handler
    //TODO: note had to take this away for it to work
	//else if (event.type == SDL_KEYDOWN) {


		if (event.key.state == 0) {
			switch (event.key.keysym.sym) {
			case SDLK_a:
				this->p->moveLeft();
				break;
			case SDLK_d:
				this->p->moveRight();
				break;
			case SDLK_SPACE:
				this->p->jump();
				break;
			default:
				break;
			}
		}
	//}
}
	


	
	


//renders platforms/player
void Game::render() {
	
	//make bakcground white
	SDL_SetRenderDrawColor(renderer, 255, 255, 255, 255);
	//draw platforms
	drawRect();
	//draw player
	this->p->render(*renderer);
	//output everything to renderer
	SDL_RenderPresent(renderer);
	//zaur nachalnie parametry dlya recta ne zadali

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



