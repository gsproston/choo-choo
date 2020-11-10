#include "Window.h"


namespace Window
{
	sf::RenderWindow window;
	const int WIDTH = 1280;
	const int HEIGHT = 720;

	void Init()
	{
		sf::ContextSettings settings;
		settings.antialiasingLevel = 8;
		window.create(sf::VideoMode(
			WIDTH, HEIGHT),
			"ChooChoo", 0x5, settings);
		window.setFramerateLimit(60);
	}

	void Display()
	{
		window.display();
	}

	void PollEvent()
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();

			if (event.type == sf::Event::KeyPressed)
			{
				if (event.key.code == sf::Keyboard::Escape)
					window.close();
			}
		}
	}
}