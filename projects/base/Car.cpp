#include "Car.h"
#include <kage2dutil/texture_manager.h>

void Car::draw(sf::RenderWindow& window)
{
	window.draw(truck);
}

void Car::load()
{
	zoom = kage::TextureManager::getTexture("data/cat.png");
	truck.setTexture(*zoom);
}
