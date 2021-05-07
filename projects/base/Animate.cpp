#include "Animate.h"


Animate::Animate(): spriteSheet(nullptr)
{
}

Animate::~Animate()
{
	delete tileSprite;
}

void Animate::Init()
{
}

void Animate::Load(std::string fileName)
{
	tileSprite = new sf::Sprite();
	spriteSheet = kage::TextureManager::getTexture(fileName);
	tileSprite->setTexture(*spriteSheet);
	tileSprite->setTextureRect(sf::IntRect(0, 65, 65, 65));
}

void Animate::Update()
{
}

void Animate::Render(sf::RenderWindow& window)
{
	window.draw(*tileSprite);
}
