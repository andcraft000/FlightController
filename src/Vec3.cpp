#include <iostream>
#include <cmath>
#include "Vec3.h"

void displayVector(const Vec3& s)
{
    std::cout << "X: " << s.x << "\n"
              << "Y: " << s.y << "\n"
              << "Z: " << s.z << "\n";
}