#include "StateManager.hpp"
#include "GameState.hpp"

StateManager::StateManager()
    : mWindow(sf::VideoMode(800, 600), "Platformowa Gra") // Inicjalizacja okna gry
{
}

StateManager::~StateManager()
{
    while (!mStates.empty()) // Usuni�cie wszystkich stan�w ze stosu
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
    delete mStates.back(); // Usuni�cie stanu ze stosu
    mStates.pop_back();
}

void StateManager::update(float dt)
{
    if (!mStates.empty()) // Aktualizacja stanu gry, je�li stos nie jest pusty
    {
        mStates.back()->handleInput(); // Obs�uga wej�� stanu
        mStates.back()->update(dt); // Aktualizacja stanu gry
    }
}

void StateManager::draw(sf::RenderWindow& window)
{
    if (!mStates.empty()) // Rysowanie element�w, je�li stos nie jest pusty
    {
        mStates.back()->draw(window);
    }
}