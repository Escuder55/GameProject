#include <SDL.h>

class Player
{
public:
	enum class Input {
		UP,
		DOWN,
		LEFT,
		RIGHT,
		BOMB,
		NONE
	};
	enum class PowerUp {
		ROLLERSKATE,
		HELMET,
		NONE
	};

	Player(int currentNumPlayer);
	void waitForInput(int numPlayer);
	void upDate(Player::Input currentInput, int numPlayer);
	void powerUp(Player::PowerUp myPowerUp);
	void increaseScore(int scoreEvent);
	void decreaseHealth();
	int getPosX();
	int getPosY();
	int getLives();
	void setVelocity(float currentVelocity);
	~Player();

private:

	int posX;
	int posY;
	float velocity;
	int score;
	int lives;
	bool canDropBomb;
	bool invencibility;
	int numPlayer;
};