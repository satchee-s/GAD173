#include "example.h"

Example::Example(): App(), grid()
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
	return true;
}

void Example::update(float deltaT)
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape) && m_window.hasFocus())
	{
		m_running = false;
	}
	ImGui::Begin("Kage2D");
	if(ImGui::Button("Exit"))
	{ 
		m_running = false;
	}
	if (ImGui::Button("Save File"))
	{
		Load::SaveFile("GridMap.txt", map.map, 100);
	}
	if (ImGui::Button("Load File"))
	{
		Load::LoadFile("GridMap.txt", map.map);
	}
	ImGui::End();
	map.DrawMap();
	map.MapMenu();
	map.TileButton(m_window);
}

void Example::render()
{
	m_window.draw(*m_backgroundSprite);
	map.Render(m_window);
	grid.Render(m_window);
}

void Example::cleanup()
{
}

