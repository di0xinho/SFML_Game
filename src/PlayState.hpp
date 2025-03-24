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

    void handleInput() override; // Funkcja obs³uguj¹ca wejœcia
    void update(float dt) override; // Funkcja aktualizuj¹ca stan gry
    void draw(sf::RenderWindow& window) override; // Funkcja rysuj¹ca elementy na ekranie

private:
    Player mPlayer; // Obiekt gracza
    std::vector<Platform> mPlatforms; // Wektor platform
};
