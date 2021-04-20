#pragma once
#include <SFML/Graphics.hpp>
#include <kage2dutil/texture_manager.h>
#include <iostream>


#define CELL_WIDTH 65
#define CELL_HEIGHT 65

#define X_OFFSET 450
#define Y_OFFSET 100

#define HORZ_LINE_WIDTH CELL_WIDTH*HORZ_CELL_COUNT
#define VERT_LINE_WIDTH CELL_HEIGHT*VERT_CELL_COUNT

#define HORZ_CELL_COUNT 10
#define VERT_CELL_COUNT 10
#define HORZ_ARRAY_SIZE HORZ_CELL_COUNT + 1
#define VERT_ARRAY_SIZE VERT_CELL_COUNT + 1

#define LINE_HEIGHT 2

class Grid
{
public:
	Grid();
	~Grid();
	sf::RectangleShape lineHorz[HORZ_ARRAY_SIZE];
	sf::RectangleShape lineVert[VERT_ARRAY_SIZE];
	void Render(sf::RenderWindow& window);

};

