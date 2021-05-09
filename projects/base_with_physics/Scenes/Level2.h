#pragma once
#include "Scenes/Scene.h"
#include <GameLoad.h>
class Level2 : public Scene
{
private:
	int tileNum[100] = {
		2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
		2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
		2, 2, 1, 1, 1, 1, 1, 1, 2, 2,
		2, 2, 1, 1, 1, 1, 1, 1, 2, 2,
		2, 2, 1, 1, 4, 4, 1, 1, 2, 2,
		2, 2, 1, 1, 4, 4, 1, 1, 2, 2,
		2, 2, 1, 1, 1, 1, 1, 1, 2, 2,
		2, 2, 1, 1, 1, 1, 1, 1, 2, 2,
		2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
		2, 2, 2, 2, 2, 2, 2, 2, 2, 2
	};
	sf::Sprite tiles[100];
	GameLoad gameload;
	sf::Texture* tileSheet;
public:
	Level2();
	~Level2();
	void Load() override;
	void Update () override;
	void Render(sf::RenderWindow& window) override;
};

