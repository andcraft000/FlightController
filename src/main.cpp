#include <iostream>
#include "Vec3.h"
#include "RigidBody.h"

int main()
{

    double dt {0.1};
    int step{};
    Vec3 position{2.0, 3.0, 10.2};
    Vec3 velocity{1.0, 2.5, 5.7};
    double scalar {4.736};
    RigidBody rigidbody{position, velocity};
    
    double positionMagnitude{magnitude(position)};
    double velocityMagnitude{magnitude(velocity)};

    Vec3 addedVector {vectorAddition(position, velocity)};
    Vec3 subtractedVector {vectorSubtraction(position, velocity)};
    Vec3 scalarVector {scalarMultiplication(position, scalar)};
    


    // std::cout << "\nPosition:\n";
    // displayVector(position);

    // std::cout << "\nVelocity:\n";
    // displayVector(velocity);


    // std::cout << "\nPosition + Velocity: \n";
    // displayVector(addedVector);

    // std::cout << "\nPosition - Velocity: \n";
    // displayVector(subtractedVector);

    // std::cout << "\nScalar Multiplicaton: \n";
    // displayVector(scalarVector);

    // std::cout << "\nPosition Magnitude: \n";
    // std::cout << positionMagnitude << '\n';

    // std::cout << "\nSpeed: \n";
    // std::cout << velocityMagnitude << '\n';

    std::cout << "\nRigidBody: \n";
    displayBody(rigidbody);

    // updateBody(rigidbody, dt);

    while (step < 10)
    {
        updateBody(rigidbody, dt);
        displayBody(rigidbody);
        ++step;
    }
    return 0;
}