#include "SceneManager.h"

SceneManager::SceneManager()
{
}

SceneManager::~SceneManager()
{
}

void SceneManager::LoadScene(int sceneIndex)
{
	currentScene = sceneIndex;
}

void SceneManager::AddScene(Scene* scene)
{
	scenes.push_back(scene);
}

void SceneManager::RemoveScene(int sceneIndex)
{
}

void SceneManager::Load()
{
	scenes[currentScene]->Load();
}

void SceneManager::Update()
{
	if (scenes.size() > 0)
		scenes[currentScene]->Update();
}

void SceneManager::Render(sf::RenderWindow& window)
{
	if (scenes.size() > 0)
		scenes[currentScene]->Render(window);
}
