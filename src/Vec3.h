#pragma once

struct Vec3{
    double x{};
    double y{};
    double z{};
};

void displayVector(const Vec3& s);

Vec3 vectorAddition(const Vec3& s, const Vec3& f);
Vec3 vectorSubtraction(const Vec3& s, const Vec3& f);
Vec3 scalarMultiplication(const Vec3& s, double scalar);
double magnitude(const Vec3& s);

