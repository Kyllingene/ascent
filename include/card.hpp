#ifndef CARD
#define CARD

class GameState;

#include <vector>
#include "effect.hpp"
#include "renderer.hpp"

class Card {
    public:
        std::vector<Effect> effects;
        int cost;

        Renderable sprite;

        void play(GameState* state);
};

#endif