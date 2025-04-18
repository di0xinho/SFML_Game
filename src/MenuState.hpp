#pragma once

#include "GameState.hpp"
#include <SFML/Graphics.hpp>

class MenuState : public GameState
{
public:
    MenuState(StateManager* stateManager);
    virtual ~MenuState();

    void handleInput() override; // Funkcja obsługująca wejścia
    void update(float dt) override; // Funkcja aktualizująca stan gry
    void draw(sf::RenderWindow& window) override; // Funkcja rysująca elementy na ekranie

private:
    sf::Font mFont; // Czcionka do tekstu menu
    sf::Text mText; // Tekst menu
};