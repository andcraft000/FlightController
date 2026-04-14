#include <iostream>
#include "Vec3.h"
#include "RigidBody.h"

void displayBody(const RigidBody& s)
{
    std::cout << "\nPosition RB:\n";
    displayVector(s.position);

    std::cout << "\nVelocity RB:\n";
    displayVector(s.velocity);

    std::cout << "\nAcceleration RB:\n";
    displayVector(s.acceleration);

    std::cout << "\nForce RB:\n";
    displayVector(s.force);

    std::cout << "\nMass RB:\n" << s.mass << '\n';
    
}

void updateBody(RigidBody& s, double dt)
{
    s.acceleration = s.force / s.mass;
    s.velocity     = s.velocity + s.acceleration * dt;
    s.position     = s.position + s.velocity * dt;
}