#include "Map.h"

Map::Map()
{
}

Map::~Map()
{
}

void Map::DrawMap()
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
			tiles[square].setPosition(sf::Vector2f((CELL_HEIGHT + X_OFFSET) + CELL_HEIGHT * x,
													CELL_WIDTH * y + (CELL_WIDTH + Y_OFFSET)));

		}
	}
}

void Map::Render(sf::RenderWindow& window)
{
	for (int j = 0; j < 100; j++)
		window.draw(tiles[j]);
}
