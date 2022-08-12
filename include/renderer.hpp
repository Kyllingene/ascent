#ifndef RENDERER
#define RENDERER

#include "constants.hpp"
#include "raylib.h"

class GameState;

// TODO: make wrappers around raylib display classes
typedef Texture2D Renderable;

void renderFrame(GameState* state);

#endif