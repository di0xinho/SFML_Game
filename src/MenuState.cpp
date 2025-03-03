#include "MenuState.hpp"
#include <SFML/Graphics.hpp>

void MenuState::handleInput(Game& game) {
    sf::Event event;
    while (game.getWindow().pollEvent(event)) {
        if (event.type == sf::Event::Closed) {
            game.getWindow().close();
        }
        else if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Enter) {
            // Zmiana stanu na stan gry - Przejœcie do gry
        }
    }
}

void MenuState::render(Game& game, sf::RenderWindow& window) {
    window.clear(sf::Color::Blue);
    // Mo¿na dodaæ tekst menu
    window.display();
}