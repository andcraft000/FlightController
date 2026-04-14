#include <iostream>
#include "Vec3.h"
#include "RigidBody.h"

int main()
{

    double dt {0.1};
    int step{};

    Vec3 position{2.0, 3.0, 10.2};
    Vec3 velocity{1.0, 2.5, 5.7};
    Vec3 acceleration{};
    Vec3 force {3, .14, -9.8};
    double mass {14};
    RigidBody rigidbody{position, 
                        velocity, 
                        acceleration,
                        force,
                        mass};


    double scalar {4.736};    
    double positionMagnitude{magnitude(position)};
    double velocityMagnitude{magnitude(velocity)};

    Vec3 addedVector {vectorAddition(position, velocity)};
    Vec3 subtractedVector {vectorSubtraction(position, velocity)};
    Vec3 scalarVector {scalarMultiplication(position, scalar)};

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