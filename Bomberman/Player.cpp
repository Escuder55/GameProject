#include "Player.h"



Player::Player()
{
}

void Player::waitForInput(int numPlayer)
{


	bool isRunning = true;
	while (isRunning) {
		// HANDLE EVENTS
		SDL_Event event;

		while (SDL_PollEvent(&event)) {
			switch (event.key.keysym.sym) {

			case SDL_QUIT:		isRunning = false; break;
			////////INPUT PLAYER 1 ///////////
			case SDLK_w:
				Player::upDate(Player::Input::UP, numPlayer);
				break;

			case SDLK_s:
				Player::upDate(Player::Input::DOWN, numPlayer);
				break;

			case SDLK_a:
				Player::upDate(Player::Input::LEFT, numPlayer);
				break;

			case SDLK_d:
				Player::upDate(Player::Input::RIGHT, numPlayer);
				break;

			case SDLK_SPACE:
				Player::upDate(Player::Input::BOMB, numPlayer);
				break;
			////// INPUT PLAYER 2 ///////
			case SDLK_UP:
				Player::upDate(Player::Input::UP, numPlayer);
				break;

			case SDLK_DOWN:
				Player::upDate(Player::Input::DOWN, numPlayer);
				break;

			case SDLK_LEFT:
				Player::upDate(Player::Input::LEFT, numPlayer);
				break;

			case SDLK_RIGHT:
				Player::upDate(Player::Input::RIGHT, numPlayer);
				break;

			case SDLK_RCTRL:
				Player::upDate(Player::Input::BOMB, numPlayer);
				break;
			
			case SDL_KEYDOWN:	if (event.key.keysym.sym == SDLK_ESCAPE) isRunning = false; break;
			default:;
			}
		}

	}
}

	void Player::upDate(Player::Input currentInput, int numPlayer)
	{
		switch (currentInput)
		{
		case Player::Input::UP :
			if (numPlayer == 1)
			{

			}
			else
			{

			}
			break;

		case Player::Input::DOWN :
			if (numPlayer == 1)
			{

			}
			else
			{

			}
			break;

		case Player::Input::LEFT :
			break;
		case Player::Input::RIGHT :
			if (numPlayer == 1)
			{

			}
			else
			{

			}
			break;

		case Player::Input::BOMB :
			if (numPlayer == 1)
			{

			}
			else
			{

			}
			break;

		default:
			break;
		}
	}

	void Player::powerUp(Player::PowerUp myPowerUp)
{
	switch (myPowerUp)
	{
	case Player::PowerUp::HELMET:
		Player::invencibility = true;
		break;
	case Player::PowerUp::ROLLERSKATE:
		Player::setVelocity(1.8);
		break;
	default:
		break;
	}
}

void Player::increaseScore(int scoreEvent)
{
	Player::score += scoreEvent;
}

void Player::decreaseHealth()
{
	Player::lives--;
}

int Player::getPosX()
{
	return Player::posX;
}

int Player::getPosY()
{
	return Player::posY;
}

int Player::getLives()
{
	return lives;
}

void Player::setVelocity(float currentVelocity)
{
	Player::velocity = currentVelocity;
}

Player::~Player()
{
}
