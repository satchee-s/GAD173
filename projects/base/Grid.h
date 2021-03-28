#pragma once
#include <SFML/Graphics.hpp>
#include <kage2dutil/texture_manager.h>
#include <iostream>


#define CELL_WIDTH 65
#define CELL_HEIGHT 65
#define X_OFFSET 450
#define Y_OFFSET 100
#define ARRAY_SIZE 11
#define LINE_WIDTH 650
#define LINE_HEIGHT 2

class Grid
{
public:
	Grid();
	~Grid();
	sf::RectangleShape lineHorz[ARRAY_SIZE];
	sf::RectangleShape lineVert[ARRAY_SIZE];
	void Render(sf::RenderWindow& window);
	void GridMap();
	void Button();
	void Update(sf::RenderWindow& window);

	sf::Texture *holo;
	sf::Texture *blue;
	sf::Texture *green;


	int map[100] = {
		0,1,1,0,0,0,2,1,0,2,
		0,1,1,0,2,2,2,1,0,2,
		2,1,0,0,1,1,2,1,0,1,
		0,1,1,0,2,0,2,1,0,2,
		0,1,0,0,1,1,2,1,0,2,
		1,2,1,0,0,0,2,1,2,1,
		0,1,1,0,1,0,2,1,0,2,
		0,1,1,0,0,0,2,1,0,2,
		0,1,1,0,0,0,2,1,0,2,
		0,1,1,2,0,1,2,1,0,0
	};
	//0 = ship, 1= fireball, 2 = rock
	sf::Sprite tiles[100];

};

