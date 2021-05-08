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
	texture = kage::TextureManager::getTexture("data/tilesheet.png");
	sprite->setTexture(*texture);
}



void AnimatedSprite::Update()
{
	sf::Time timer = clock.getElapsedTime();
	if (timer.asMilliseconds() > 500) {
		index = SPRITE_WIDTH * x;
		sprite->setTextureRect(sf::IntRect(index, 0, 65, 65));
		x++;
		if (x > 3)
		{
			x = 0;
		}
		clock.restart();
	}
}

void AnimatedSprite::Render(sf::RenderWindow& window)
{
	window.draw(*sprite);
}