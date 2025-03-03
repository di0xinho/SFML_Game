#pragma once
#include "GameState.hpp"
#include "Game.hpp"

class MenuState : public GameState {
public:
    void handleInput(Game& game) override;
    void update(Game& game) override {}
    void render(Game& game, sf::RenderWindow& window) override;
};
