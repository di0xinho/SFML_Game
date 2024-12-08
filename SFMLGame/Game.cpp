#include "Game.hpp"

Game::Game()
    : window(sf::VideoMode(800, 600), "Projekt gry platformowej - SFML") {
    window.setFramerateLimit(60); // Ograniczenie liczby FPS do 60 klatek - wykorzystanie "sta³ego kroku"
}

Game::~Game() {}

void Game::run() {
    while (window.isOpen()) {
        sf::Time deltaTime = clock.restart(); // Czas od ostatniej klatki
        processEvents();
        update(deltaTime);
        render();
    }
}

void Game::processEvents() {
    sf::Event event;
    while (window.pollEvent(event)) {
        if (event.type == sf::Event::Closed) {
            window.close();
        }
    }
}

void Game::update(sf::Time dt) {
    // Aktualizacja logiki gry (np. ruchy postaci, fizyka)
}

void Game::render() {
    window.clear(); // Czyszczenie okna
    // Renderowanie elementów gry
    window.display(); // Wyœwietlenie okna
}
