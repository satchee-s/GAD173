#pragma once
#include "Scenes/Scene.h"
#include <vector>
class SceneManager
{
private:
	int currentScene;
	std::vector<Scene*> scenes;
public:
	SceneManager();
	~SceneManager();
	void LoadScene(int sceneIndex);
	void AddScene(Scene* scene);
	void RemoveScene(int sceneIndex);
	
	void Load();
	void Update();
	void Render(sf::RenderWindow& window);

	inline const int& GetActiveScene() { return currentScene; }


};

