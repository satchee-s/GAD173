#pragma once
#include "Map.h"

#define SPRITE_WIDTH 65
class AnimatedSprite
{

private:
	int index = 0;
	int coordinateX = 0;
public:
	Map map;

	AnimatedSprite();
	~AnimatedSprite();
	void Load();
	void Render(sf::RenderWindow& window);
	void Update();

	sf::Clock clock;
	sf::Texture* tileSheet;
	sf::Sprite* sprite;

};

