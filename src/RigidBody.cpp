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

    std::cout << "\nWeight RB:\n" << s.mass;
    
}

void updateBody(RigidBody& s, double dt)
{   
    s.acceleration = {scalarDivision(s.force, s.mass)};

    s.velocity = {vectorAddition((s.velocity), 
                 (scalarMultiplication(s.acceleration, dt)))};
    
    s.position = {vectorAddition((s.position), 
                 (scalarMultiplication(s.velocity, dt)))};
}