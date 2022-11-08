#pragma once
#include <iostream>

class GameManager
{
	GameManager() {}
	GameManager(const GameManager& other) {}
	~GameManager() {}
	static GameManager* self;

public:
	static GameManager& instance()
	{
		static GameManager* self = new GameManager();

		return *self;
	}

	void PrintStatus()
	{
		std::cout << "GameManager Activate !" << std::endl;
	}
};