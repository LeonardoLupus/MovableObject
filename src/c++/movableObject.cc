#include <movableObject/movableObject.h> 

#include <math.h>

MovableObject::MovableObject() : 
    speed(0.f), 
    curr_direction(0.f), 
    max_force(100.f), 
    way_points({{0.0, 0.0}}),
    current_point(1),
    time_on_way(0),
    current_coord(0.0, 0.0)
{}

MovableObject::MovableObject(float const_speed, float const_direction) :
    speed(const_speed), 
    curr_direction(const_direction), 
    max_force(100.f), 
    way_points({}),
    current_point(0),
    time_on_way(0),
    current_coord(0.0, 0.0)
{}

MovableObject::MovableObject(float const_speed, float const_direction, const Coord& start_point) :
    speed(const_speed), 
    curr_direction(const_direction), 
    max_force(100.f), 
    way_points({}),
    current_point(0),
    time_on_way(0),
    current_coord(start_point)
{}

MovableObject::MovableObject(double x, double z) : 
    speed(0.f), 
    curr_direction(0.f), 
    max_force(100.f), 
    way_points({}),
    current_point(1),
    time_on_way(0),
    current_coord({x, z})
{}

auto MovableObject::move(int interval_sec) -> void
{
    // if(current_point >= way_points.size()) {
    //     return;
    // }
    double len_way = interval_sec*speed;
    current_coord.go_to(len_way, curr_direction);
}

auto MovableObject::get_coord() -> Coord
{
    return current_coord;
}

auto MovableObject::angle_btw(Coord target) -> float
{
    Coord vecDirection(10*cos(curr_direction), 10*sin(curr_direction));
    target.x -= current_coord.x;
    target.z -= current_coord.z;

    return atan2(target.x*vecDirection.z - target.z*vecDirection.x, vecDirection.x*target.x + vecDirection.z*target.z);
}