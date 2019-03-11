#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>
#include <unistd.h>
#include <cstdio>

int main()
{
    // Create the main window
    sf::RenderWindow app(sf::VideoMode(800, 600), "SFML window");

    // Load a sprite to display
    sf::Texture texture;
    if (!texture.loadFromFile("cb.bmp"))
        return EXIT_FAILURE;
    sf::Sprite sprite(texture);
    int mb=0,rad=0,p1os=0,p2os=0,var=0;
    bool ch=false;

    std::cout<< "chose the varient";
    std::cin>> mb;

    if(mb=1)
    {
    std::cout<< "radius";
    std::cin>> rad;
    std::cout<< "pos x";
    std::cin>> p1os;
    std::cout<< "pos y";
    std::cin>> p2os;
    var=1;
    }

	if (var==1)
	{// Start the game loop
    while (ch==false)
    {
        // Process events
        sf::Event event;
        while (app.pollEvent(event))
        {
            // Close window : exit
            if (event.type == sf::Event::Closed)
                app.close();
        }

        // Clear screen
        app.clear();

        // Draw the sprite
       app.draw(sprite);

        // Update the window

          // app.clear();
        sf::CircleShape shape(50);
        shape.setPosition(p1os,p2os);
        shape.setRadius(rad);
// set the shape color to green
        shape.setFillColor(sf::Color(100, 250, 50));

        app.draw(shape);

        app.display();
        ch=true;

    }
    int plos=3.14*(rad*rad),perim=2*3.14*rad;
    std::cout<< plos;
    std::cout<< "\n";
    std::cout<< perim;
}

    return EXIT_SUCCESS;
}
