#include "include/renderer.hpp"

void renderFrame(GameState* state) {
    
    BeginDrawing();

        ClearBackground(RAYWHITE);
        DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY);

    EndDrawing();

}