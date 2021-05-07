#pragma once
#include <SFML/Graphics.hpp>
#include <kage2dutil/texture_manager.h>


class Animate
{
public:
	Animate();
	~Animate();
	void Init();
	void Load(std::string fileName);
	void Update();
	void Render(sf::RenderWindow& window);

	sf::Texture *spriteSheet;
	sf::Sprite *tileSprite;
};

