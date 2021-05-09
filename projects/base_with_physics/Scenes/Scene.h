#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>

class Scene
{
	
public:
	Scene();
	~Scene();

	virtual void Load();
	virtual void Update();
	virtual void Render(sf::RenderWindow& window);

	bool isRunning = false;
	bool isLoaded = false;
};

