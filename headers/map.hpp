#pragma once

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