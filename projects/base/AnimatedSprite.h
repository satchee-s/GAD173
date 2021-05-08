#pragma once
#include <SFML/Graphics.hpp>
#include <kage2dutil/texture_manager.h>

#define SPRITE_WIDTH 65
class AnimatedSprite
{

private:
	int index = 0;
	int x = 0;
public:
	sf::Clock clock;
	sf::Texture* texture;
	sf::Sprite* sprite;

	AnimatedSprite();
	~AnimatedSprite();
	void Load();
	void Render(sf::RenderWindow& window);
	void Update();
};

