#include <iostream>
#include "Vec3.h"
#include "RigidBody.h"

int main()
{

    double dt {0.1};
    int step{};
    double mass {14};

    Vec3 position{2.0, 3.0, 10.2};
    Vec3 velocity{1.0, 2.5, 5.7};
    Vec3 acceleration{};
    Vec3 thrust {3, 9.8, 0.14};
    Vec3 gravity {0, -9.8, 0};
    Vec3 gravityForce = mass * gravity;
    Vec3 netForce = gravityForce + thrust;

    RigidBody rigidbody{position, 
                        velocity, 
                        acceleration,
                        netForce,
                        mass};

    double scalar {4.736};    

    std::cout << "\nRigidBody: \n";
    displayBody(rigidbody);

    while (step < 10)
    {
        updateBody(rigidbody, dt);
        displayBody(rigidbody);
        ++step;
    }
    return 0;
}