#include "Scene.h"

Scene::Scene()
{
}

Scene::~Scene()
{
}

void Scene::Load()
{
}

void Scene::Update()
{
	std::cout << "The update function has been called" << std::endl;
}

void Scene::Render(sf::RenderWindow& window)
{
	std::cout << "The render function has been called" << std::endl;

}
