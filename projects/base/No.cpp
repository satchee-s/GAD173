#include "No.h"



void No::Render(sf::RenderWindow& window)
{
	window.draw(asdf);
}

void No::Load(sf:: Texture *pleasework)
{
	//b1 = kage::TextureManager::getTexture("data/cat.png");
	asdf.setTexture(*pleasework);
	asdf.setPosition(sf::Vector2f(0, 50));
}

No::No()
{
}

No::~No()
{
}
