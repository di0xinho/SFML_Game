#pragma once

#include <SFML/Graphics.hpp>

class StateManager;

class GameState
{
public:
    GameState(StateManager* stateManager); // Konstruktor
    virtual ~GameState(); // Destruktor

    virtual void handleInput() = 0; // Funkcja obs�uguj�ca wej�cia (czysto wirtualna)
    virtual void update(float dt) = 0; // Funkcja aktualizuj�ca stan gry (czysto wirtualna)
    virtual void draw(sf::RenderWindow& window) = 0; // Funkcja rysuj�ca elementy na ekranie (czysto wirtualna)

protected:
    StateManager* mStateManager; // Wska�nik do mened�era stan�w
};