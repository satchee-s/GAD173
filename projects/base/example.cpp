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
	tile1 = kage::TextureManager::getTexture("data/holo.jpg");
	tile2 = kage::TextureManager::getTexture("data/blue.jpg");
	tile3 = kage::TextureManager::getTexture("data/green.jpg");
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
	if (ImGui::ImageButton(*tile1, sf::Vector2f(65, 65)))
	{
		tileType = 0;
	}
	else if (ImGui::ImageButton(*tile2, sf::Vector2f(65, 65)))
	{
		tileType = 1;
	}
	else if (ImGui::ImageButton(*tile3, sf::Vector2f(65, 65)))
	{
		tileType = 2;
	}
	TileButton();
	ImGui::End();
	map.DrawMap();
}

void Example::TileButton()
{
	sf::Vector2i pos = sf::Mouse::getPosition(m_window);
	if (sf::Mouse::isButtonPressed(sf::Mouse::Button::Left))
	{
		int posX = (pos.x - CELL_HEIGHT - X_OFFSET) / CELL_WIDTH;
		int posY = (pos.y - CELL_WIDTH - Y_OFFSET) / CELL_HEIGHT;
		int square = posX + posY * 10;
		bool gridPosX = pos.x >= (X_OFFSET + CELL_HEIGHT) &&
			pos.x <= (X_OFFSET + CELL_HEIGHT + CELL_HEIGHT * HORZ_CELL_COUNT);
		bool gridPosY = pos.y >= (Y_OFFSET + CELL_WIDTH) &&
			pos.y <= (Y_OFFSET + CELL_WIDTH + CELL_WIDTH * VERT_CELL_COUNT);
		if (square < 100 && gridPosX == true && gridPosY == true)
			map.map[square] = tileType;
	}

}

void Example::render()
{
	m_window.draw(*m_backgroundSprite);
	grid.Render(m_window);
	map.Render(m_window);
}

void Example::cleanup()
{
	delete m_backgroundSprite;
}

