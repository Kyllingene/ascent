#ifndef RENDERER
#define RENDERER

#include "constants.hpp"
#include "raylib.h"

class GameState;

typedef Texture2D Renderable;

//struct Color { float r, g, b, a; };

// class Renderable {
//     public:
//         bool render(float x, float y);
// };

// class Rectangle: public Renderable {
//     public:
//         Rectangle(float w, float h);
//         float width, height;
//         // color;
//         bool render(float x, float y);

//     private:
//         sf::RectangleShape shape;
// };

// class Circle: public Renderable {
//     public:
//         Circle(float r);
//         float radius;
//         // color;
//         bool render(float x, float y);
        
//     private:
//         // shape;
// };

void renderFrame(GameState* state);

#endif