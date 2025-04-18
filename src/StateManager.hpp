#pragma once

#include <SFML/Graphics.hpp>
#include <vector>

class GameState;

class StateManager
{
public:
    StateManager();
    ~StateManager();

    void pushState(GameState* state); // Dodanie stanu do stosu stan�w
    void popState(); // Usuni�cie stanu ze stosu stan�w

    void update(float dt); // Aktualizacja stanu gry
    void draw(sf::RenderWindow& window); // Rysowanie element�w na ekranie

    sf::RenderWindow* getWindow() { return &mWindow; } // Pobranie wska�nika do okna gry

private:
    std::vector<GameState*> mStates; // Stos stan�w gry
    sf::RenderWindow mWindow; // Okno gry
};

