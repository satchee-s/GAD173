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
	m_backgroundSprite = kage::TextureManager::getSprite("data/sky.jpg");
	sf::Vector2u resolution = m_backgroundSprite->getTexture()->getSize();
	m_backgroundSprite->setScale(float(m_window.getSize().x) / resolution.x, float(m_window.getSize().y) / resolution.y);
	animatedSprite.Load();
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
	if (ImGui::Button("Blue"))
	{
		tileType = 1;
	}
	else if (ImGui::Button("Purple"))
	{
		tileType = 2;
	}
	else if (ImGui::Button("Red"))
	{
		tileType = 3;
	}
	else if (ImGui::Button("Green"))
	{
		tileType = 4;
	}
	else if (ImGui::Button("Yellow"))
	{
		tileType = 5;
	}
	TileButton();
	ImGui::End();
	map.DrawMap();
	animatedSprite.Update();
}

void Example::TileButton()
{
	sf::Vector2i pos = sf::Mouse::getPosition(m_window);
	if (sf::Mouse::isButtonPressed(sf::Mouse::Button::Left))
	{
		int posX = (pos.x - CELL_WIDTH - X_OFFSET) / CELL_WIDTH;
		int posY = (pos.y - CELL_WIDTH - Y_OFFSET) / CELL_WIDTH;
		int square = posX + posY * 10;
		bool gridPosX = pos.x >= (X_OFFSET + CELL_WIDTH) &&
						pos.x <= (X_OFFSET + CELL_WIDTH + CELL_WIDTH * CELL_COUNT);
		bool gridPosY = pos.y >= (Y_OFFSET + CELL_WIDTH) &&
						pos.y <= (Y_OFFSET + CELL_WIDTH + CELL_WIDTH * CELL_COUNT);
		if (square < 100 && gridPosX == true && gridPosY == true)
			map.map[square] = tileType;
	}
}

void Example::render()
{
	m_window.draw(*m_backgroundSprite);
	grid.Render(m_window);
	map.Render(m_window);
	//animatedSprite.Render(m_window);
}

void Example::cleanup()
{
}

