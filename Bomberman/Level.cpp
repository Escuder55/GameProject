#include "Level.h"



Level::Level(int numLevel)
{
}

void Level::loadMap(int numLevel)
{
}

void Level::updateMap()
{
}

bool Level::isAlive(int numPlayer)
{
	bool isAlive = true;
	if (numPlayer == 1)
	{
		if (player1.getLives() <= 0)isAlive = false;
	}
	return isAlive;
}

bool Level::timeOut()
{
	bool timeOut = false;
	if (time <= 0) timeOut = true;
	return timeOut;
}


Level::~Level()
{
}