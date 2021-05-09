#include "example.h"
#include "Scenes/Level2.h"
#include "Scenes/Level1.h"


Example::Example(): App()
{
}

Example::~Example()
{
}

Example &Example::inst()
{
	static Example s_instance;
	return s_instance;
}

bool Example::start()
{
	m_backgroundSprite = kage::TextureManager::getSprite("data/background.jpg");
	sf::Vector2u resolution = m_backgroundSprite->getTexture()->getSize();
	m_backgroundSprite->setScale(float(m_window.getSize().x) / resolution.x, float(m_window.getSize().y) / resolution.y);
	sceneManager.AddScene(new Level1());
	sceneManager.AddScene(new Level2());
	return true;
}

void Example::update(float deltaT)
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape) && m_window.hasFocus())
	{
		m_running = false;
	}
	/*if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num1))
	{

	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num2))
	{

	}*/
	ImGui::Begin("Kage2D");
	if(ImGui::Button("Exit"))
	{ 
		m_running = false;
	}
	if (ImGui::Button("Load Level 1") || sf::Keyboard::isKeyPressed(sf::Keyboard::Num1))
	{
		sceneManager.LoadScene(0);
	}
	if (ImGui::Button("Load Level 2") || sf::Keyboard::isKeyPressed(sf::Keyboard::Num2))
	{
		sceneManager.LoadScene(1);
	}
	ImGui::End();	
	sceneManager.Update();
}

void Example::render()
{
	m_window.draw(*m_backgroundSprite);
	sceneManager.Render(m_window);
}

void Example::cleanup()
{
}

