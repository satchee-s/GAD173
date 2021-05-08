#pragma once
#include <kage2dutil/texture_manager.h>
#include "Grid.h"

class Map
{
public:
	Map();
	~Map();
	void DrawMap();
	void Render(sf::RenderWindow& window);

	sf::Texture *tileSheet;

	int map[TOTAL_CELLS];

	sf::Sprite tiles[TOTAL_CELLS];
};

