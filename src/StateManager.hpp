#pragma once

#include <SFML/Graphics.hpp>
#include <vector>

class GameState;

class StateManager
{
public:
    StateManager(sf::RenderWindow* window);
    ~StateManager();

    void pushState(GameState* state); // Dodanie stanu do stosu stanów
    void popState(); // Usuniêcie stanu ze stosu stanów

    void update(float dt); // Aktualizacja stanu gry
    void draw(); // Rysowanie elementów na ekranie

    sf::RenderWindow* getWindow() { return mWindow; } // Pobranie wskaŸnika do okna gry

private:
    std::vector<GameState*> mStates; // Stos stanów gry
    sf::RenderWindow* mWindow; // WskaŸnik do okna gry
};