#pragma once
#include <SFML/Graphics.hpp>
#include <kage2dutil/texture_manager.h>
#include <iostream>

#define CELL_WIDTH 65 //default 65

#define X_OFFSET 450
#define Y_OFFSET 100

#define CELL_COUNT 10 //default 10
#define ARRAY_SIZE CELL_COUNT + 1
#define LINE_WIDTH CELL_WIDTH*CELL_COUNT

#define LINE_HEIGHT 1

class Grid
{
public:
	Grid();
	~Grid();
	sf::RectangleShape lineHorz[ARRAY_SIZE];
	sf::RectangleShape lineVert[ARRAY_SIZE];
	void Render(sf::RenderWindow& window);
};

