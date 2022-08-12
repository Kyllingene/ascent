#ifndef MAP
#define MAP

#include <vector>

#include "rng.hpp"
#include "entity.hpp"

enum Direction {
    Left = 0,
    Down,
    Right,
    Up,
};

enum RewardType {
    RewardCard = 0,
    RewardMoney,
    RewardOther,
};

struct Reward {
    RewardType type;
    void* reward;
};

class Room; // not technically cyclical reference, since its ptr->Room
struct Door {
    Direction side;
    Room* destination;
};

class Room {
    public:
        std::vector<Door> doors;
        std::vector<Entity> enemies;

        std::vector<Reward> rewards;

        Room* move(Direction dir);
};

class Map {
    public:
        std::vector<Room> rooms;
        Room* currentRoom;

        void move(Direction dir);
};

#endif