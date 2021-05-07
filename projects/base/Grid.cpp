#include "Grid.h"


Grid::Grid()
{

	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		for (int j = 0; j < ARRAY_SIZE; j++)
		{
			lineHorz[i].setSize(sf::Vector2f(LINE_WIDTH, LINE_HEIGHT));
			lineVert[j].setSize(sf::Vector2f(LINE_HEIGHT, LINE_WIDTH));
			lineHorz[i].setPosition(sf::Vector2f(X_OFFSET + CELL_WIDTH, (i+1) * CELL_WIDTH + Y_OFFSET));
			lineVert[j].setPosition(sf::Vector2f(X_OFFSET + (j+1) * CELL_WIDTH, CELL_WIDTH + Y_OFFSET));

		}
	}
}

Grid::~Grid()
{
}

void Grid::Render(sf::RenderWindow& window)
{
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		window.draw(lineHorz[i]);
		window.draw(lineVert[i]);
	}
}