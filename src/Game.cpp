#include "Game.hpp"
#include "MenuState.hpp"

Game::Game() : window(sf::VideoMode(800, 600), "Platformówka SFML") {
    stateManager.pushState(std::make_unique<MenuState>()); // Startujemy od menu
}

void Game::run() {
    while (window.isOpen()) {
        if (stateManager.getCurrentState()) {
            stateManager.getCurrentState()->handleInput(*this);
            stateManager.getCurrentState()->update(*this);
            stateManager.getCurrentState()->render(*this, window);
        }
    }
}

sf::RenderWindow& Game::getWindow() {
    return window;
}

void Game::changeState(std::unique_ptr<GameState> state) {
    stateManager.popState();
    stateManager.pushState(std::move(state));
}
