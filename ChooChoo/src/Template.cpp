#include <SFML/Graphics.hpp>

#include <Display/window.h>

int main()
{
	Window::Init();

	while (Window::window.isOpen())
	{
		Window::PollEvent();
		Window::Display();
	}

	return 0;
}