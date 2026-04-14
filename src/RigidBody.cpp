#include <iostream>
#include "Vec3.h"
#include "RigidBody.h"

void displayBody(const RigidBody& s)
{
    std::cout << "\nPosition RB:\n";
    displayVector(s.position);

    std::cout << "\nVelocity RB:\n";
    displayVector(s.velocity);
}

void updateBody(RigidBody& s, double dt)
{   
    s.position = {vectorAddition((s.position), 
                 (scalarMultiplication(s.velocity, dt)))};
}