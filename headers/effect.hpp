#pragma once
#include "main.hpp"

enum EffectMode {
    TargetTeam = 0,
    TargetSingle,
    SpawnEntity,
};

class Effect {
    public:
        EffectMode mode;
        Team target;

        void apply(GameState* state, Card* source);
};