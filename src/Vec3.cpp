#include <iostream>
#include "Vec3.h"

void displayVector(const Vec3& s)
{
    std::cout << "X: " << s.x << "\n"
              << "Y: " << s.y << "\n"
              << "Z: " << s.z << "\n";
}

Vec3 vectorAddition(const Vec3& s, const Vec3& f)
{
    Vec3 newAdd {
        (s.x + f.x),
        (s.y + f.y),
        (s.z + f.z)
    };

    return newAdd;
}

Vec3 vectorSubtraction(const Vec3& s, const Vec3& f)
{
    Vec3 newSub {
        (s.x - f.x),
        (s.y - f.y),
        (s.z - f.z)
    };

    return newSub;
}

int scalarMultiplication(){
    return 1;
}