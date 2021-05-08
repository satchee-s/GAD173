#pragma once
#include <kage2dutil/texture_manager.h>
#include <kage2dutil/imgui.h>
#include "Grid.h"
#define SPRITE_SIZE 65

class Map
{
private:
	sf::Clock clock;
	int index = 0;
	int coordinateX = 0;
	int coordinateY = 0;


public:
	Map();
	~Map();
	void DrawMap();
	void MapMenu();
	void TileButton(sf::RenderWindow& window);
	void Render(sf::RenderWindow& window);

	sf::Texture *tileSheet;
	int tileType = 0;

	int map[TOTAL_CELLS] = {
		1, 2, 3, 4, 5, 1, 2, 3, 4, 5,
		1, 2, 3, 4, 5, 1, 2, 3, 4, 5,
		1, 2, 3, 4, 5, 1, 2, 3, 4, 5,
		1, 2, 3, 4, 5, 1, 2, 3, 4, 5,
		1, 2, 3, 4, 5, 1, 2, 3, 4, 5,
		1, 2, 3, 4, 5, 1, 2, 3, 4, 5,
		1, 2, 3, 4, 5, 1, 2, 3, 4, 5,
		1, 2, 3, 4, 5, 1, 2, 3, 4, 5,
		1, 2, 3, 4, 5, 1, 2, 3, 4, 5,
		1, 2, 3, 4, 5, 1, 2, 3, 4, 5
	}; //1 = blue, 2 = purple, 3 = red, 4 = green, 5 = yellow

	sf::Sprite tiles[TOTAL_CELLS];
};

