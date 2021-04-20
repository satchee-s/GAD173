#include "Grid.h"


Grid::Grid()
{

	for (int i = 1; i <= HORZ_ARRAY_SIZE; i++)
	{
		for (int j = 1; j <= VERT_ARRAY_SIZE; j++)
		{
			lineHorz[i-1].setSize(sf::Vector2f(HORZ_LINE_WIDTH, LINE_HEIGHT));
			lineVert[j-1].setSize(sf::Vector2f(LINE_HEIGHT, VERT_LINE_WIDTH));
			lineHorz[i-1].setPosition(sf::Vector2f(X_OFFSET + CELL_WIDTH, i * CELL_HEIGHT + Y_OFFSET));
			lineVert[j-1].setPosition(sf::Vector2f(X_OFFSET + j * CELL_HEIGHT, CELL_WIDTH + Y_OFFSET));

		}
	}
}

Grid::~Grid()
{
}


void Grid::Render(sf::RenderWindow& window)
{
	for (int i = 0; i < HORZ_ARRAY_SIZE; i++)
	{
		window.draw(lineHorz[i]);
		window.draw(lineVert[i]);
	}
}