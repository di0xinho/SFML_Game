#ifndef GAME_HPP
#define GAME_HPP

#include <SFML/Graphics.hpp>

class Game {
public:
    // Konstuktory / destruktory
    Game();
    ~Game();

    // Metoda do uruchomienia p�tli gry
    void run(); 

private:
    sf::RenderWindow window; // Okno gry
    sf::Clock clock;         // Zegar do mierzenia czasu

    void processEvents();    // Obs�uga wej�cia
    void update(sf::Time dt); // Metoda aktualizacji
    void render();           // Renderowanie grafiki
};

#endif 
