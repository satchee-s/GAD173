#include "Grid.h"


Grid::Grid()
{

	for (int i = 1; i <= ARRAY_SIZE; i++)
	{
		for (int j = 1; j <= ARRAY_SIZE; j++)
		{
			lineHorz[i-1].setSize(sf::Vector2f(LINE_WIDTH, LINE_HEIGHT));
			lineVert[j-1].setSize(sf::Vector2f(LINE_HEIGHT, LINE_WIDTH));
			lineHorz[i-1].setPosition(sf::Vector2f(X_OFFSET + CELL_WIDTH, i * CELL_HEIGHT + Y_OFFSET));
			lineVert[j-1].setPosition(sf::Vector2f(X_OFFSET + j * CELL_HEIGHT, CELL_WIDTH + Y_OFFSET));

		}
	}
}

Grid::~Grid()
{
}


void Grid::GridMap()
{
	holo = kage::TextureManager::getTexture("data/holo.jpg");
	blue = kage::TextureManager::getTexture("data/blue.jpg");
	green = kage::TextureManager::getTexture("data/green.jpg");

	for (size_t y = 0; y < ARRAY_SIZE; y++)
	{
		for (size_t x = 0; x < ARRAY_SIZE; x++)
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
}

void Grid::Button()
{
}

/*void Grid::Update(sf::RenderWindow& window)
{
	sf::Vector2i pos = sf::Mouse::getPosition(window);
	if (sf::Mouse::isButtonPressed(sf::Mouse::Button::Left))
	{
		int posX = (pos.x - 65 - X_OFFSET) / CELL_WIDTH;
		int posY = (pos.y - 65 - Y_OFFSET) / CELL_HEIGHT;
		int gridSquare = posX + posY * 10;
		if (gridSquare < 100)
			map[gridSquare] = example.tileType;
	}
}*/

void Grid::Render(sf::RenderWindow& window)
{
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		window.draw(lineHorz[i]);
		window.draw(lineVert[i]);
	}
	for (int j = 0; j < 100; j++)
		window.draw(tiles[j]);
}