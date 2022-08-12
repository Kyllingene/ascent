#include "include/main.hpp"

GameState::GameState(Map initial_map) {
    map = initial_map;
};

int main() {

    InitWindow(WIN_WIDTH, WIN_HEIGHT, "Ascent");

    SetTargetFPS(60);

    GameState game();

    while (!WindowShouldClose()) {
        renderFrame(nullptr);
    }

    return 0;
}