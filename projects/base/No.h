#pragma once
#include <SFML/Graphics.hpp>
#include <kage2dutil/texture_manager.h>


class No
{
public:
	No();
	~No();
	void Render(sf::RenderWindow& window);
	void Load(sf::Texture* pleasework);
	//sf::Texture *b1;
private:
	sf::Sprite asdf;


};

