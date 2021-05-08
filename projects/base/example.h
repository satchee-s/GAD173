#pragma once
#include "Grid.h"
#include "app.h"
#include "Map.h"
#include "Load.h"
#include "AnimatedSprite.h"

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

	Grid grid;
	Map map;
	AnimatedSprite animatedSprite;

	sf::Sprite *m_backgroundSprite;
};
