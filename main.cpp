#include "include/main.hpp"

int main() {

    InitWindow(WIN_WIDTH, WIN_HEIGHT, "Ascent");

    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        renderFrame(nullptr);
    }

    return 0;
}