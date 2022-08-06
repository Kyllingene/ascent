#pragma once

enum Team {
    Self = 0,
    Enemy,
};

class Entity {
    public:
        int health;
        Team team;

        std::vector<Effect> attacks;
        Renderable sprite;

        int chooseAttack(GameState* state);
};