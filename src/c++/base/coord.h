#pragma once

#include <math.h>

struct Coord
{
    double x;
    double z;

    Coord(double init_x, double init_z): x(init_x), z(init_z) {}
    auto go_to(double length, float direction) -> void
    {
        x += cos(direction)*static_cast<float>(length);
        z += sin(direction)*static_cast<float>(length);
    }
};
