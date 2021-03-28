#pragma once
#include <SFML/Graphics.hpp>
class Car
{
public:
	void draw(sf::RenderWindow& window);
	void load();
private:
	sf::Texture* zoom;
	sf::Sprite truck;

};

