#include <iostream>

#include "Game.h"

using namespace sf;

int width = 800;
int height = 600;

int main()
{
    // Alarm if user is trying to close the console
    printf("!! Status window please do not close !!");

    // Run Game Engine
    Game game;

    // Check if the window is open
    while (game.running())
    {
        // Update
        game.update();

        // Render
        game.render();
    }

    return EXIT_SUCCESS; // Close the program
}
