#pragma once
#include <memory>
#include <stack>
#include "GameState.hpp"

class StateManager {
public:
    void pushState(std::unique_ptr<GameState> state) {
        states.push(std::move(state));
    }

    void popState() {
        if (!states.empty()) {
            states.pop();
        }
    }

    GameState* getCurrentState() {
        return states.empty() ? nullptr : states.top().get();
    }

private:
    std::stack<std::unique_ptr<GameState>> states;
};
