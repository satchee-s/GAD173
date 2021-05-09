#include "Level2.h"

Level2::Level2()
{
}

Level2::~Level2()
{
}

void Level2::Load()
{

}

void Level2::Update()
{
	gameload.LoadMap(tileNum, tiles);
}

void Level2::Render(sf::RenderWindow& window)
{
	for (int i = 0; i < TOTAL_CELLS; i++)
	{
		window.draw(tiles[i]);
	}
}
