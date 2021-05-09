#include "example.h"
#include "Scenes/MainMenu.h"
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
	sceneManager.AddScene(new MainMenu());
	sceneManager.AddScene(new Level1());
	return true;
}

void Example::update(float deltaT)
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape) && m_window.hasFocus())
	{
		m_running = false;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num0))
	{
		sceneManager.LoadScene(0);

	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Num1))
	{
		sceneManager.LoadScene(1);

	}
	ImGui::Begin("Kage2D");
	if(ImGui::Button("Exit"))
	{ 
		m_running = false;
	}
	ImGui::End();	
	sceneManager.Update();
}

void Example::render()
{
	sceneManager.Render(m_window);
}

void Example::cleanup()
{
}

