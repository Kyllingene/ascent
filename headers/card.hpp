#pragma once
#include "main.hpp"

class Card {
    public:
        std::vector<Effect> effects;
        int cost;

        Renderable sprite;

        void play(GameState* state);
};