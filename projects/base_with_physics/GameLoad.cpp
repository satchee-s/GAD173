#include "GameLoad.h"

void GameLoad::LoadMap(int* map, sf::Sprite* tiles)
{
	tileSheet = kage::TextureManager::getTexture("data/tilesheet.png");
	sf::Time timer = clock.getElapsedTime();
	if (timer.asMilliseconds() > 500)
	{
		coordinateX = SPRITE_SIZE * index;
		for (int y = 0; y < ARRAY_SIZE; y++)
		{
			for (int x = 0; x < ARRAY_SIZE; x++)
			{
				int square = x + y * CELL_COUNT;
				if (square >= TOTAL_CELLS || map[square] < 1 || map[square] > 5)
					break;
				coordinateY = SPRITE_SIZE * (map[square] - 1);
				tiles[square].setTexture(*tileSheet);
				tiles[square].setTextureRect(sf::IntRect(coordinateX, coordinateY, SPRITE_SIZE, SPRITE_SIZE));
				tiles[square].setPosition(sf::Vector2f((CELL_WIDTH + X_OFFSET) + CELL_WIDTH * x,
														CELL_WIDTH * y + (CELL_WIDTH + Y_OFFSET)));
			}
		}
		index++;
		if (index > 3)
		{
			index = 0;
		}
		clock.restart();
	}
}
