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
	sf::Time timer = clock.getElapsedTime();
	if (timer.asMilliseconds() > 500)
	{
		coordinateX = SPRITE_SIZE * index;
		for (int y = 0; y < ARRAY_SIZE; y++)
		{
			for (int x = 0; x < ARRAY_SIZE; x++)
			{
				int square = x + y * CELL_COUNT;
				if (square >= TOTAL_CELLS)
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

void Map::MapMenu()
{
	ImGui::Begin("Editor");
	if (ImGui::Button("Blue"))
	{
		tileType = 1;
	}
	else if (ImGui::Button("Purple"))
	{
		tileType = 2;
	}
	else if (ImGui::Button("Red"))
	{
		tileType = 3;
	}
	else if (ImGui::Button("Green"))
	{
		tileType = 4;
	}
	else if (ImGui::Button("Yellow"))
	{
		tileType = 5;
	}
	ImGui::End();
}

void Map::TileButton(sf::RenderWindow& window)
{
	sf::Vector2i pos = sf::Mouse::getPosition(window);
	if (sf::Mouse::isButtonPressed(sf::Mouse::Button::Left))
	{
		int posX = (pos.x - CELL_WIDTH - X_OFFSET) / CELL_WIDTH;
		int posY = (pos.y - CELL_WIDTH - Y_OFFSET) / CELL_WIDTH;
		int square = posX + posY * 10;
		bool gridPosX = pos.x >= (X_OFFSET + CELL_WIDTH) &&
						pos.x <= (X_OFFSET + CELL_WIDTH + CELL_WIDTH * CELL_COUNT);
		bool gridPosY = pos.y >= (Y_OFFSET + CELL_WIDTH) &&
						pos.y <= (Y_OFFSET + CELL_WIDTH + CELL_WIDTH * CELL_COUNT);
		if (square < 100 && gridPosX == true && gridPosY == true)
			map[square] = tileType;
	}
}

void Map::Render(sf::RenderWindow& window)
{
	for (int i = 0; i < TOTAL_CELLS; i++)
	{
		window.draw(tiles[i]);
	}
}
