#include "Player.h"


void Player::init()
{
	playerCanvas.h = 50;
	playerCanvas.w = 50;
	playerCanvas.x = 50;
	playerCanvas.y = 400;
	//dest.h = 50;
//	dest.w = 50;
//	dest.x = 50;
//	dest.y = 400;
	
}

void Player::updatePosition()
{
}

Player::Player(SDL_Renderer &renderer, int screen_width, int screen_height)
{
	SDL_Surface *tempSurf = IMG_Load("player.png");
	this->playerIm = SDL_CreateTextureFromSurface(&renderer, tempSurf);
	SDL_FreeSurface(tempSurf);
	m_screen_height = screen_height;
	m_screen_width = screen_width;
	this->init();
}

void Player::update()
{
	if (playerCanvas.y < 0) playerCanvas.y = 0;
	if (playerCanvas.y >= this->m_screen_height) playerCanvas.y = this->m_screen_height;
	if (playerCanvas.x < 0) playerCanvas.x = 0;
	if (playerCanvas.x >= this->m_screen_width) playerCanvas.x = this->m_screen_width;

	if (isJumping) {

		if (currentJumpHeight >= maxJumpHeight || isFalling == true) {
			currentJumpHeight--;
			if (currentJumpHeight <= 0) {
				currentJumpHeight = 0;
				isFalling = false;
				isJumping = false;
			}
			else {
	playerCanvas.y++;
			isFalling = true; 
			}

		
		}
		else {
			currentJumpHeight++;
			playerCanvas.y--;
		}

	}


}

void Player::render(SDL_Renderer & renderer)
{
	SDL_RenderCopy(&renderer, this->playerIm, NULL, &this->playerCanvas);
}

void Player::moveLeft()
{
	this->playerCanvas.x -= 10;
}

void Player::moveRight()
{
	this->playerCanvas.x += 10;
}

void Player::jump()
{
	if (!isJumping) {
		isJumping = true;
	}

}
