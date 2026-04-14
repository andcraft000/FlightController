#include <iostream>
#include <cmath>
#include "Vec3.h"
#include "RigidBody.h"


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

Vec3 scalarMultiplication(const Vec3& s, double scalar)
{
     Vec3 scalarVector{
        (s.x * scalar),
        (s.y * scalar),
        (s.z * scalar)
    };
    return scalarVector;
}

Vec3 scalarDivision(const Vec3& s, double scalar)
{
     Vec3 scalarVector{
        (s.x / scalar),
        (s.y / scalar),
        (s.z / scalar)
    };
    return scalarVector;   
}

double magnitude(const Vec3& s)
{
    return std::sqrt(( (s.x*s.x) + (s.y*s.y) + (s.z*s.z) ));
}