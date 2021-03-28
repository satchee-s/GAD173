#include "example.h"

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
	m_backgroundSprite = kage::TextureManager::getSprite("data/sky.jpg");
	sf::Vector2u resolution = m_backgroundSprite->getTexture()->getSize();
	m_backgroundSprite->setScale(float(m_window.getSize().x) / resolution.x, float(m_window.getSize().y) / resolution.y);
	tile1 = kage::TextureManager::getTexture("data/holo.jpg");
	tile2 = kage::TextureManager::getTexture("data/blue.jpg");
	tile3 = kage::TextureManager::getTexture("data/green.jpg");
	car.load();
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
	if (ImGui::ImageButton(*tile1, sf::Vector2f(65, 65)));
	{
		tileType = 0;
	}
	if (ImGui::ImageButton(*tile2, sf::Vector2f(65, 65)));
	{
		tileType = 1;

	}
	if (ImGui::ImageButton(*tile3, sf::Vector2f(65, 65)));
	{
		tileType = 2;

	}
	ImGui::End();
	TileButton();
	grid.GridMap();

}

void Example::TileButton()
{
	sf::Vector2i pos = sf::Mouse::getPosition(m_window);
	if (sf::Mouse::isButtonPressed(sf::Mouse::Button::Left))
	{
		int posX = (pos.x - 65 - X_OFFSET) / CELL_WIDTH;
		int posY = (pos.y - 65 - Y_OFFSET) / CELL_HEIGHT;
		int gridSquare = posX + posY * 10;
		if (gridSquare < 100)
			grid.map[gridSquare] = tileType;
	}
}

void Example::render()
{
	m_window.draw(*m_backgroundSprite);
	grid.Render(m_window);
	m_window.draw(help);
	//car.draw(m_window);

}

void Example::cleanup()
{
	delete m_backgroundSprite;
}

