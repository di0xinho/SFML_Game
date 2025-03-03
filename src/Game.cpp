// Game.cpp
#include "Game.hpp"

Game::Game() : window(sf::VideoMode(800, 600), "Platform Game") {
}

void Game::run() {
    while (window.isOpen()) {
        float deltaTime = clock.restart().asSeconds();
        processEvents();
        update(deltaTime);
        render();
    }
}

void Game::processEvents() {
    sf::Event event;
    while (window.pollEvent(event)) {
        if (event.type == sf::Event::Closed)
            window.close();
    }
}

void Game::update(float deltaTime) {
}

void Game::render() {
    window.clear();
    window.display();
}