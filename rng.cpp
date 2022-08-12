#include "include/rng.hpp"

int random(int max, int min=0) {
    if (min != 0)
        max, min = min, max;

    // TODO: does this actually work???
    return (rand() % ((max - min) + 1)) + min;
}

float random(float max, float min=0) {
    if (min != 0)
        max, min = min, max;

    int base = random((int)max, (int)min);
    float decimal = random(0, 100) / 100;

    // TODO: does this actually work???
    return base + decimal;
}

double random(double max, double min=0) {
    if (min != 0)
        max, min = min, max;

    return (double)random((double)max, (double)min);
}