#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>

int main()
{
    // Create the main window
    sf::RenderWindow window(sf::VideoMode({800, 600}), "SFML window");


    sf::RectangleShape sprite(sf::Vector2f(100, 100));
    sprite.setPosition({100, 100});

    // Create a graphical text to display
    const sf::Font font("..\\assets\\aishiteru-darling.otf");
    sf::Text text(font, "Hello SFML", 50);

    // Start the game loop
    while (window.isOpen())
    {
        // Process events
        while (const std::optional event = window.pollEvent())
        {
            // Close window: exit
            if (event->is<sf::Event::Closed>())
                window.close();
        }

        // Clear screen
        window.clear();

        // Draw the sprite
        window.draw(sprite);

        // Draw the string
        window.draw(text);

        // Update the window
        window.display();
    }
}