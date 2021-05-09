#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>

class Scene
{
	bool isRunning = false;
public:
	Scene();
	~Scene();

	virtual void Load();
	virtual void Update();
	virtual void Render(sf::RenderWindow& window);
};

