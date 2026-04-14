#pragma once
#include "Vec3.h"

struct RigidBody{
    Vec3 position;
    Vec3 velocity;
};

void displayBody(const RigidBody& s);
void updateBody(RigidBody& s, double dt);
