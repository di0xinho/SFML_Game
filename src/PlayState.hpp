#pragma once

#include "GameState.hpp"
#include <vector>
#include "Platform.hpp"
#include "Player.hpp"

class PlayState : public GameState
{
public:
    PlayState(StateManager* stateManager);
    virtual ~PlayState();

    void handleInput() override; // Funkcja obsługująca wejścia
    void update(float dt) override; // Funkcja aktualizująca stan gry
    void draw(sf::RenderWindow& window) override; // Funkcja rysująca elementy na ekranie

private:
    Player mPlayer; // Obiekt gracza
    std::vector<Platform> mPlatforms; // Wektor platform
};
