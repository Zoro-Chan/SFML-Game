#include "Game.h"

// Private Functions

void Game::initvar()
{
    this->window = nullptr;
}

void Game::initwin()
{
    this->videomode.height = 600;
    this->videomode.width = 800;
    this->window = new sf::RenderWindow(this->videomode, "Program", sf::Style::Titlebar | sf::Style::Close);
}

// Accessors
const bool Game::running() const
{
    return this->window->isOpen();
}

void Game::pollEvents()
{
    while (this->window->pollEvent(this->ev))
    {
        switch (this->ev.type)
        {
        case Event::Closed:
            this->window->close();
            break;
        case Event::KeyPressed:
            if (this->ev.key.code == sf::Keyboard::Escape)
            {
                this->window->close();
                break;
            }
        }
    }
}

// Constructor & Destructor

Game::Game()
{
    this->initvar();
    this->initwin();
}

Game::~Game()
{
    delete this->window;
}

// Back end stuff e.g keyboard Input, events, etc.

void Game::update()
{
    this->pollEvents();
}

// Front end stuff e.g Visuals, Texts, etc.

void Game::render()
{
    this->window->clear(sf::Color::Green);
    // Render here
        // TODO: Render player & sprites
    this->window->display();
}
