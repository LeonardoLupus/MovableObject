#include <movableObject/movableObject.h>
#include <iostream>
#include <math.h>

int main() {

    MovableObject plain(1.f, 3.141592f/2);
    MovableObject radar(-30.0, 30.0);

    std::cout << "\nNow plian is:\tx: " << plain.get_coord().x << " \tz: " << plain.get_coord().z << "\n";
    std::cout << "Now radar is:\tx: " << radar.get_coord().x << " \tz: " << radar.get_coord().z << "\n";
    std::cout << "Angel is:\tx: " << plain.angle_btw(radar.get_coord()) << " \t=: " << plain.angle_btw(radar.get_coord())*180/3.141592 << "\n";
    std::cout << "---------------\n";

    for (size_t i = 0; i < 60; i++)
    {
        plain.move(1);
        std::cout << "Now plian is:\tx: " << plain.get_coord().x << " \tz: " << plain.get_coord().z << "\n";
        std::cout << "Now radar is:\tx: " << radar.get_coord().x << " \tz: " << radar.get_coord().z << "\n";
        std::cout << "Angel is:\tx: " << plain.angle_btw(radar.get_coord()) << " \t=: " << plain.angle_btw(radar.get_coord())*180/3.141592 << "\n";
        std::cout << "---------------\n";
    }

    std::cout << "Hello, World!\n";
    return 0;
}
