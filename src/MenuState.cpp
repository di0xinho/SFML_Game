#include "MenuState.hpp"
#include "StateManager.hpp"
#include "PlayState.hpp"

MenuState::MenuState(StateManager* stateManager)
    : GameState(stateManager)
{
    mFont.loadFromFile("arial.ttf"); // £adowanie czcionki
    mText.setFont(mFont); // Ustawienie czcionki dla tekstu
    mText.setString("Platformowa Gra\nNacisnij Enter aby rozpocz¹æ"); // Ustawienie tekstu
    mText.setCharacterSize(24); // Ustawienie rozmiaru tekstu
    mText.setFillColor(sf::Color::White); // Ustawienie koloru tekstu
    mText.setPosition(200.f, 300.f); // Ustawienie pozycji tekstu
}

MenuState::~MenuState()
{
    // Destruktor
}

void MenuState::handleInput()
{
    sf::Event event;
    while (mStateManager->getWindow()->pollEvent(event)) // Pêtla zdarzeñ
    {
        if (event.type == sf::Event::Closed) // Jeœli okno jest zamkniête
            mStateManager->getWindow()->close(); // Zamkniêcie okna gry
        if (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Enter)
        {
            // Przejœcie do stanu gry
            mStateManager->pushState(new PlayState(mStateManager));
        }
    }
}

void MenuState::update(float dt)
{
    // Aktualizacja logiki menu
}

void MenuState::draw(sf::RenderWindow& window)
{
    window.draw(mText); // Rysowanie tekstu menu
}