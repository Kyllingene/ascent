#pragma once

struct Color { int r, g, b, a; };

class Renderable {
    public:
        bool render(int x, int y);
};

class Rectangle: public Renderable {
    public:
        int w, h;
        Color c;
};

class Circle: public Renderable {
    public:
        int r;
        Color c;
};

bool rect(int x, int y, int w, int h);

void renderFrame(GameState* state);