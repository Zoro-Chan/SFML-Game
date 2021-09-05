#ifndef GAME_H
#define GAME_H

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Network.hpp>

using namespace sf;

class Game{
private:
    // Variables
    // Window
    RenderWindow* window;
    VideoMode videomode;
    Event ev;

    // Private Functions
    void initvar();
    void initwin();
public:
    // Constructors & Destructor
    Game();
    virtual ~Game();

    // Accessors
    const bool running() const;

    // functions
    void update();
    void render();
    void pollEvents();
};
#endif // GAME_H
