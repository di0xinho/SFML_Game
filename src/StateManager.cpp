#include "StateManager.hpp"
#include "GameState.hpp"

StateManager::StateManager(sf::RenderWindow* window)
    : mWindow(window) // Inicjalizacja wskaŸnika do okna gry
{
}

StateManager::~StateManager()
{
    while (!mStates.empty()) // Usuniêcie wszystkich stanów ze stosu
    {
        popState();
    }
}

void StateManager::pushState(GameState* state)
{
    mStates.push_back(state); // Dodanie stanu do stosu
}

void StateManager::popState()
{
    delete mStates.back(); // Usuniêcie stanu ze stosu
    mStates.pop_back();
}

void StateManager::update(float dt)
{
    if (!mStates.empty()) // Aktualizacja stanu gry, jeœli stos nie jest pusty
    {
        mStates.back()->handleInput(); // Obs³uga wejœæ stanu
        mStates.back()->update(dt); // Aktualizacja stanu gry
    }
}

void StateManager::draw()
{
    if (!mStates.empty()) // Rysowanie elementów, jeœli stos nie jest pusty
    {
        mStates.back()->draw(*mWindow);
    }
}