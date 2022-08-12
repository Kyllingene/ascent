#ifndef MAP
#define MAP

#include <vector>
#include "entity.hpp"

enum RoomSide {
    RoomLeft = 0,
    RoomDown,
    RoomRight,
    RoomUp,
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
    RoomSide side;
    Room* destination;
};

class Room {
    public:
        std::vector<Door> doors;
        std::vector<Entity> enemies;

        std::vector<Reward> rewards;
};

class Map {
    public:
        std::vector<Room> rooms;
        Room* currentRoom;
};

#endif