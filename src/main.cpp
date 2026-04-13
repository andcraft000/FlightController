#include <iostream>
#include "Vec3.h"

int main()
{

    Vec3 position{2.0, 3.0, 10.2};
    Vec3 velocity{1.0, 2.5, 5.7};

    Vec3 addedVector {vectorAddition(position, velocity)};
    Vec3 subtractedVector {vectorSubtraction(position, velocity)};


    std::cout << "Position:\n";
    displayVector(position);

    std::cout << "Velocity:\n";
    displayVector(velocity);


    std::cout << "Position + Velocity: \n";
    displayVector(addedVector);

    std::cout << "Position - Velocity: \n";
    displayVector(subtractedVector);

    return 0;
}