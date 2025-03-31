#pragma once

#include <SFML/Graphics.hpp>

class StateManager;

class GameState
{
public:
    GameState(StateManager* stateManager); // Konstruktor
    virtual ~GameState(); // Destruktor

    virtual void handleInput() = 0; // Funkcja obs³uguj¹ca wejœcia (czysto wirtualna)
    virtual void update(float dt) = 0; // Funkcja aktualizuj¹ca stan gry (czysto wirtualna)
    virtual void draw(sf::RenderWindow& window) = 0; // Funkcja rysuj¹ca elementy na ekranie (czysto wirtualna)

protected:
    StateManager* mStateManager; // WskaŸnik do mened¿era stanów
};