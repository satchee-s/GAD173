#pragma once
#include "Scenes/Scene.h"
class MainMenu : public Scene
{
public:
	MainMenu();
	~MainMenu();
	void Load() override;
	void Update () override;
	void Render(sf::RenderWindow& window) override;
};

