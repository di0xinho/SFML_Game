#include "PlayState.hpp"

PlayState::PlayState(StateManager* stateManager)
    : GameState(stateManager)
{
    // Dodajemy kilka platform
    mPlatforms.push_back(Platform(100.f, 500.f, 200.f, 20.f));
    mPlatforms.push_back(Platform(400.f, 400.f, 200.f, 20.f));
    mPlatforms.push_back(Platform(700.f, 300.f, 200.f, 20.f));
}

PlayState::~PlayState()
{
    // Destruktor
}

void PlayState::handleInput()
{
    mPlayer.handleInput(); // Obs³uga wejœæ gracza
}

void PlayState::update(float dt)
{
    mPlayer.update(dt); // Aktualizacja stanu gracza

    // Obs³uga kolizji z platformami
    for (auto& platform : mPlatforms)
    {
        if (mPlayer.getBounds().intersects(platform.getBounds()))
        {
            mPlayer.setPosition(mPlayer.getPosition().x, platform.getBounds().top - mPlayer.getBounds().height);
            mPlayer.setVelocityY(0.f);
            mPlayer.setJumping(false);
        }
    }
}

void PlayState::draw(sf::RenderWindow& window)
{
    mPlayer.draw(window); // Rysowanie gracza
    for (auto& platform : mPlatforms)
    {
        platform.draw(window); // Rysowanie platform
    }
}