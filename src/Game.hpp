#pragma once

#include <SFML/Graphics.hpp>
#include "StateManager.hpp"

class Game
{
public:
    Game();
    void run();

private:
    void processEvents(); // Funkcja obs³uguj¹ca zdarzenia
    void update(); // Funkcja aktualizuj¹ca stan gry
    void render(); // Funkcja rysuj¹ca elementy na ekranie

    sf::RenderWindow mWindow; // Okno gry
    StateManager mStateManager; // Mened¿er stanów gry
    sf::Time TimePerFrame; // Czas na jedn¹ klatkê
};