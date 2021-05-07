#include "Map.h"

Map::Map()
{
}

Map::~Map()
{
}

void Map::DrawMap()
{
	tileSheet = kage::TextureManager::getTexture("data/tilesheet.png");

	for (size_t y = 0; y < ARRAY_SIZE; y++)
	{
		for (size_t x = 0; x < ARRAY_SIZE; x++)
		{
			int square = x + y * 10;
			if (map[square] == 1)
			{
				tiles[square].setTexture(*tileSheet);
				tiles[square].setTextureRect(sf::IntRect(0, 0, 65, 65));
			}
			else if (map[square] == 2)
			{
				tiles[square].setTexture(*tileSheet);
				tiles[square].setTextureRect(sf::IntRect(0, 65, 65, 65));

			}
			else if (map[square] == 3)
			{
				tiles[square].setTexture(*tileSheet);
				tiles[square].setTextureRect(sf::IntRect(0, 130, 65, 65));
			}
			else if (map[square] == 4)
			{
				tiles[square].setTexture(*tileSheet);
				tiles[square].setTextureRect(sf::IntRect(0, 195, 65, 65));
			}
			else if (map[square] == 5)
			{
				tiles[square].setTexture(*tileSheet);
				tiles[square].setTextureRect(sf::IntRect(0, 260, 65, 65));
			}
			tiles[square].setPosition(sf::Vector2f((CELL_WIDTH + X_OFFSET) + CELL_WIDTH * x,
													CELL_WIDTH * y + (CELL_WIDTH + Y_OFFSET)));
		}
	}
}

void Map::Render(sf::RenderWindow& window)
{
	for (size_t i = 0; i < 100; i++)
	{
		window.draw(tiles[i]);
	}
}
