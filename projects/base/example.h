#pragma once
#include "Grid.h"
#include "app.h"
#include "Map.h"
#include "Load.h"
#include "Animate.h"
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

	int tileType = 7;

	Grid grid;
	Map map;
	Animate animate;

	sf::Sprite *m_backgroundSprite;
};
