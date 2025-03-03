#pragma once
#include <SFML/Graphics.hpp>
#include "StateManager.hpp"

class Game {
public:
    Game();
    void run();

    sf::RenderWindow& getWindow();
    void changeState(std::unique_ptr<GameState> state);

private:
    sf::RenderWindow window;
    StateManager stateManager;
};
