#ifndef EFFECT
#define EFFECT

#include "target.hpp"

class GameState;
class Card;

class Effect {
    public:
        EffectMode mode;
        Team target;

        void apply(GameState* state, Card* source);
};

#endif