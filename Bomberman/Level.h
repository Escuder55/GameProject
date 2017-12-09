#pragma once
#include "Scene.h"
#include "Player.h"
#include <time.h>

class Level :
	public Scene
{
public:
	Level(int numLevel);
	void loadMap(int numLevel);
	void updateMap();
	bool isAlive(int numPlayer);
	bool timeOut();
	~Level();
private:
	enum class PowerUp {
		ROLLERSKATE,
		HELMET,
		NONE
	};
	Player &player1;
	Player &player2;
	float time;
	int numPlayer;


};
