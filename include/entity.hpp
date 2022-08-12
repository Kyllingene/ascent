#ifndef ENTITY
#define ENTITY

class GameState;

#include <vector>
#include "renderer.hpp"
#include "effect.hpp"
#include "target.hpp"

class Entity {
    public:
        int health;
        Team team;

        std::vector<Effect> attacks;
        Renderable sprite;

        int chooseAttack(GameState* state);
};

#endif