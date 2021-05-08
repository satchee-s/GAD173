#include "AnimatedSprite.h"

#include <iostream>
AnimatedSprite::AnimatedSprite()
{
}

AnimatedSprite::~AnimatedSprite()
{
	delete sprite;
}

void AnimatedSprite::Load()
{
	sprite = new sf::Sprite();
	tileSheet = kage::TextureManager::getTexture("data/tilesheet.png");
	sprite->setTexture(*tileSheet);
}



void AnimatedSprite::Render(sf::RenderWindow& window)
{
}