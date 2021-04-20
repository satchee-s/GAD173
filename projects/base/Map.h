#pragma once
#include <SFML/Graphics.hpp>
#include <kage2dutil/texture_manager.h>
#include "Grid.h"

class Map 
{
public:
	Map();
	~Map();
	void Render(sf::RenderWindow& window);
	void DrawMap();

	sf::Texture* holo;
	sf::Texture* blue;
	sf::Texture* green;
	sf::Sprite tiles[100];

	int map[100] = {
		0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0,
		0,0,0,0,0,0,0,0,0,0

	};
	//0 = holographic tile, 1= blue, 2 = green
	/*0, 1, 1, 0, 0, 0, 2, 1, 0, 2,
		0, 1, 1, 0, 2, 2, 2, 1, 0, 2,
		2, 1, 0, 0, 1, 1, 2, 0, 0, 1,
		0, 1, 1, 0, 2, 0, 2, 1, 0, 2,
		0, 1, 0, 0, 0, 1, 2, 1, 0, 2,
		1, 2, 1, 0, 0, 0, 2, 1, 2, 1,
		0, 1, 1, 0, 1, 0, 2, 1, 0, 2,
		0, 1, 1, 0, 0, 0, 2, 1, 0, 2,
		0, 1, 1, 0, 0, 0, 2, 1, 0, 2,
		0, 1, 1, 2, 0, 1, 2, 1, 0, 0*/
};

