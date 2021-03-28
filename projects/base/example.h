#pragma once
#include "Grid.h"
#include "app.h"
#include "Car.h"
#include <iostream>

class Example : public App
{
public:
	Example();
	virtual ~Example();
	virtual bool start();
	virtual void update(float deltaT);
	virtual void render();
	virtual void cleanup();
	static Example &inst();

	void TileButton();

	sf::Texture* tile1;
	sf::Texture* tile2;
	sf::Texture* tile3;

	sf::Sprite help;

	int tileType = 4;

	Grid grid;
	Car car;

	sf::Sprite *m_backgroundSprite;
};