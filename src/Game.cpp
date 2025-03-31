#include "Game.hpp"
#include "MenuState.hpp"

Game::Game()
    : mWindow(sf::VideoMode(800, 600), "Platformowa Gra") // Inicjalizacja okna gry
    , mStateManager(&mWindow) // Inicjalizacja mened¿era stanów z wskaŸnikiem do okna gry
    , TimePerFrame(sf::seconds(1.f / 60.f)) // Ustawienie czasu na jeden frame (60 FPS)
{
    // Dodanie stanu menu do mened¿era stanów
    mStateManager.pushState(new MenuState(&mStateManager));
}

void Game::run()
{
    sf::Clock clock; // Zegar do mierzenia czasu
    sf::Time timeSinceLastUpdate = sf::Time::Zero; // Czas od ostatniej aktualizacji

    while (mWindow.isOpen()) // G³ówna pêtla gry
    {
        sf::Time elapsedTime = clock.restart(); // Czas, który up³yn¹³ od ostatniego restartu zegara
        timeSinceLastUpdate += elapsedTime;

        while (timeSinceLastUpdate > TimePerFrame)
        {
            timeSinceLastUpdate -= TimePerFrame;

            processEvents(); // Obs³uga zdarzeñ
            update(); // Aktualizacja stanu gry
        }

        render(); // Rysowanie elementów na ekranie
    }
}

void Game::processEvents()
{
    sf::Event event;
    while (mWindow.pollEvent(event)) // Pêtla zdarzeñ
    {
        if (event.type == sf::Event::Closed) // Jeœli okno jest zamkniête
            mWindow.close(); // Zamkniêcie okna gry
    }
}

void Game::update()
{
    mStateManager.update(TimePerFrame.asSeconds()); // Aktualizacja stanu gry
}

void Game::render()
{
    mWindow.clear(); // Czyszczenie okna
    mStateManager.draw(); // Rysowanie elementów
    mWindow.display(); // Wyœwietlenie narysowanych elementów
}