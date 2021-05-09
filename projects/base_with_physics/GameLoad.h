#pragma once
#include <SFML/Graphics.hpp>
#include <kage2dutil/texture_manager.h>

#define SPRITE_SIZE 65
#define CELL_WIDTH 65

#define X_OFFSET 450
#define Y_OFFSET 100

#define CELL_COUNT 10
#define TOTAL_CELLS CELL_COUNT * CELL_COUNT
#define ARRAY_SIZE CELL_COUNT + 1
using namespace std;

class GameLoad
{
private:
	sf::Clock clock;
	int index = 0;
	int coordinateX = 0;
	int coordinateY = 0;
	sf::Texture* tileSheet;
public:
	void LoadMap(int* map, sf::Sprite* tiles);
};

