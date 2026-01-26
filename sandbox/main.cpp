#include "spdlog/spdlog.h"
#include "SFML/Graphics.hpp"
#include "SFML/System.hpp"
#include "SFML/Window.hpp"

int main()
{
    spdlog::info("starting pho sandbox with SFML");

    //init window
    sf::Window window(
	sf::VideoMode(sf::Vector2u{640,480}), "Hello world!"
    );
    
    sf::sleep(sf::seconds(3));
    spdlog::info("Sandbox Shutting Down");
    return 0;
}
