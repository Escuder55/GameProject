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

	Player();
	Input waitForInput();
	void update();
	void putBomb();
	void powerUp(Player::PowerUp myPowerUp);
	void increaseScore(int scoreEvent);
	void decreaseHealth();
	int getPosX();
	int getPosY();
	void setVelocity(float currentVelocity);
	~Player();

private:

	int posX;
	int posY;
	float velocity;
	int score;
	int lives;
	bool dropBomb;
	bool invencibility;
	int numPlayer;
};