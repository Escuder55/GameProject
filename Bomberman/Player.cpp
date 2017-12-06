#include "Player.h"



Player::Player()
{
}

Player::Input Player::waitForInput()
{
	Player::Input currentInput;



	return Input(currentInput);
}

void Player::update()
{
}

void Player::putBomb()
{

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

void Player::setVelocity(float currentVelocity)
{
	Player::velocity = currentVelocity;
}

Player::~Player()
{
}
