#pragma once

#include <vector>
#include <stdio.h>

#include "renderer.hpp"
#include "entity.hpp"
#include "map.hpp"
#include "effect.hpp"
#include "card.hpp"
#include "player.hpp"

class GameState {
    public:
        std::vector<Entity> playerTeam;
        std::vector<Entity> enemyTeam;

        std::vector<Card> hand;
};