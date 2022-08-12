#ifndef ASCENT
#define ASCENT

#include <vector>
#include "entity.hpp"
#include "card.hpp"
#include "map.hpp"
#include "renderer.hpp"
#include "constants.hpp"

class GameState {
    public:
        std::vector<Entity> playerTeam;
        std::vector<Entity> enemyTeam;

        std::vector<Card> hand;

        Map map;
};

void update(GameState* state);

#endif