#pragma once
#include <conio.h>
namespace Input
{
	enum class Key // represents each key that the player can use
	{
		NONE, W, A, S, D, ENTER, ESC, SPACE, RCONTROL, UP, RIGHT, DOWN, LEFT
	};

	static Key getKey() // returns the key that has been pressed
	{
		if (_kbhit())
		{
			switch (_getch())
			{
			//PLAYER 1
			case 87: case 119:
				return Key::W; // w and W
			case 65: case 97:
				return Key::A; // a and A
			case 83: case 115:
				return Key::S; // s and S
			case 68: case 100:
				return Key::D; // d and D
			case 32:
				return Key::SPACE; // Spacebar
			//PLAYER 2
			case 2490368:
				return Key::UP;
			case 2555904:
				return Key::RIGHT;
			case 2621440:
				return Key::DOWN;
			case 2424832:
				return Key::LEFT;
			case 0:
				return Key::RCONTROL;
				
			case 13:
				return Key::ENTER; // carriage return
			case 27:
				return Key::ESC; // escape
			}
		}
		return Key::NONE;
	}
};
