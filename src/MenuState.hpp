#pragma once

#include "GameState.hpp"
#include <SFML/Graphics.hpp>

class MenuState : public GameState
{
public:
    MenuState(StateManager* stateManager);
    virtual ~MenuState();

    void handleInput() override; // Funkcja obs³uguj¹ca wejœcia
    void update(float dt) override; // Funkcja aktualizuj¹ca stan gry
    void draw(sf::RenderWindow& window) override; // Funkcja rysuj¹ca elementy na ekranie

private:
    sf::Font mFont; // Czcionka do tekstu menu
    sf::Text mText; // Tekst menu
};