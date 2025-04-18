#pragma once

#include <SFML/Graphics.hpp>
#include "StateManager.hpp"

class Game
{
public:
    Game();
    void run();

private:
    void processEvents(); // Funkcja obs�uguj�ca zdarzenia
    void update(); // Funkcja aktualizuj�ca stan gry
    void render(); // Funkcja rysuj�ca elementy na ekranie

    sf::RenderWindow mWindow; // Okno gry
    StateManager mStateManager; // Mened�er stan�w gry
    sf::Time TimePerFrame; // Czas na jedn� klatk�
};