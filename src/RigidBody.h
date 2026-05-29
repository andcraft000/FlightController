/****************************
Author: Andrew Craft
Copyright 2026

Description:
RigidBody.h declares the variables used to calculate everything used
for the quadcopter
***************************/

////////////////
#pragma once
#include "Vec3.h"

struct RigidBody{
    // Translational declarations
    Vec3 position;
    Vec3 velocity;
    Vec3 acceleration;
    Vec3 force;
    double mass;

    //Rotational Declarations
    Vec3 orientation;
    Vec3 angularVelocity;
    Vec3 angularAcceleration;
    Vec3 torque;
};

void displayBody(const RigidBody& s);
void updateBody(RigidBody& s, double dt);