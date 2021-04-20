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


/*void Grid::GridMap()
{
	holo = kage::TextureManager::getTexture("data/holo.jpg");
	blue = kage::TextureManager::getTexture("data/blue.jpg");
	green = kage::TextureManager::getTexture("data/green.jpg");

	for (size_t y = 0; y < HORZ_ARRAY_SIZE; y++)
	{
		for (size_t x = 0; x < VERT_ARRAY_SIZE; x++)
		{
			int square = x + y * 10;
			if (map[square] == 0)
			{
				tiles[square].setTexture(*holo);
			}
			else if (map[square] == 1)
			{
				tiles[square].setTexture(*blue);

			}
			else if (map[square] == 2)
			{
				tiles[square].setTexture(*green);
			}
			tiles[square].setPosition(sf::Vector2f((65+X_OFFSET) + CELL_HEIGHT * x, 
													CELL_HEIGHT * y + (65+Y_OFFSET)));

		}
	}
}*/



void Grid::Render(sf::RenderWindow& window)
{
	for (int i = 0; i < HORZ_ARRAY_SIZE; i++)
	{
		window.draw(lineHorz[i]);
		window.draw(lineVert[i]);
	}
}