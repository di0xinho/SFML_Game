#include "Game.hpp"
#include "MenuState.hpp"

Game::Game()
    : mWindow(sf::VideoMode(800, 600), "Platformowa Gra") // Inicjalizacja okna gry
    , TimePerFrame(sf::seconds(1.f / 60.f)) // Ustawienie czasu na jeden frame (60 FPS)
{
    // Dodanie stanu menu do mened�era stan�w
    mStateManager.pushState(new MenuState(&mStateManager));
}

void Game::run()
{
    sf::Clock clock; // Zegar do mierzenia czasu
    sf::Time timeSinceLastUpdate = sf::Time::Zero; // Czas od ostatniej aktualizacji

    while (mWindow.isOpen()) // G��wna p�tla gry
    {
        sf::Time elapsedTime = clock.restart(); // Czas, kt�ry up�yn�� od ostatniego restartu zegara
        timeSinceLastUpdate += elapsedTime;

        while (timeSinceLastUpdate > TimePerFrame)
        {
            timeSinceLastUpdate -= TimePerFrame;

            processEvents(); // Obs�uga zdarze�
            update(); // Aktualizacja stanu gry
        }

        render(); // Rysowanie element�w na ekranie
    }
}

void Game::processEvents()
{
    sf::Event event;
    while (mWindow.pollEvent(event)) // P�tla zdarze�
    {
        if (event.type == sf::Event::Closed) // Je�li okno jest zamkni�te
            mWindow.close(); // Zamkni�cie okna gry
    }
}

void Game::update()
{
    mStateManager.update(TimePerFrame.asSeconds()); // Aktualizacja stanu gry
}

void Game::render()
{
    mWindow.clear(); // Czyszczenie okna
    mStateManager.draw(mWindow); // Rysowanie element�w
    mWindow.display(); // Wy�wietlenie narysowanych element�w
}