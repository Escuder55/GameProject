#include "Scene.h"
#include <SDL.h>

class Ranking :
	public Scene
{
public:
	void goToRanking();
	void goToLevel1();
	void goToLevel2();
	void quitGame();
	void updateSoundOptions();
	void waitForEvent();
	~Ranking();

private:
	SDL_Rect buttonLevel1;
	SDL_Rect buttonLevel2;
	SDL_Rect buttonQuit;
	SDL_Rect buttonRanking;
	SDL_Rect buttonSoun_On_Off;
};