#include "Level1.h"

Level1::Level1()
{
}

Level1::~Level1()
{
}

void Level1::Load()
{
}

void Level1::Update()
{
	gameload.LoadMap(tileNum, tiles);
	//Map function called to create level 1
}

void Level1::Render(sf::RenderWindow& window)
{
	for (int i = 0; i < TOTAL_CELLS; i++)
	{
		window.draw(tiles[i]);
	}
}