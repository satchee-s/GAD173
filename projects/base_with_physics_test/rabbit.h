#pragma once
#include "kage2dutil/gameobject.h"

class Rabbit : public kage::GameObject
{
public:
	Rabbit();
	~Rabbit();

	void render(sf::RenderWindow &rw);
	void update(float deltaT);
	void onCollision(GameObject *obj);
	
};