#pragma once
#include "Vec3.h"

struct RigidBody{
    Vec3 position;
    Vec3 velocity;
    Vec3 acceleration;
    Vec3 force;
    double mass;
};

void displayBody(const RigidBody& s);
void updateBody(RigidBody& s, double dt);