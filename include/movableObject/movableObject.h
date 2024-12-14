#pragma once 

#include <base\coord.h>
#include <vector>

class MovableObject
{
    float speed;
    float curr_direction;
    float max_force;
    std::vector<Coord> way_points;
    unsigned int current_point;
    unsigned long long int time_on_way;
    Coord current_coord;

public:
    MovableObject();
    MovableObject(float const_speed, float const_direction);
    MovableObject(float const_speed, float const_direction, const Coord& start_point);
    MovableObject(double x, double z);
    // MovableObject(float const_speed, float max_force, const std::vector<Coord>& way);
    ~MovableObject() = default;

    auto move(int interval_sec) -> void;
    auto get_coord() -> Coord;
    auto angle_btw(Coord target) -> float;
};