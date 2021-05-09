#pragma once
#include "Scenes/Scene.h"
#include <GameLoad.h>
#include <kage2dutil/texture_manager.h>

class Level1 : public Scene
{
private:
	int tileNum[100] = {
		5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
		5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
		5, 5, 5, 5, 5, 5, 5, 5, 5, 5,
		3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
		3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
		3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
		3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
		3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
		3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
		3, 3, 3, 3, 3, 3, 3, 3, 3, 3
	};
	sf::Sprite tiles[100];
	GameLoad gameload;
	sf::Texture* tileSheet;
public:
	Level1();
	~Level1();
	void Load() override;
	void Update() override;
	void Render(sf::RenderWindow& window) override;
};

