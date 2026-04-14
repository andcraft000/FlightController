#pragma once
#include <cmath>

struct Vec3 {
    double x{};
    double y{};
    double z{};

    Vec3 operator+(const Vec3& other) const {
        return {x + other.x, y + other.y, z + other.z};
    }

    Vec3 operator-(const Vec3& other) const {
        return {x - other.x, y - other.y, z - other.z};
    }

    Vec3 operator*(double scalar) const {
        return {x * scalar, y * scalar, z * scalar};
    }

    Vec3 operator/(double scalar) const {
        return {x / scalar, y / scalar, z / scalar};
    }

    Vec3& operator+=(const Vec3& other) {
        x += other.x; y += other.y; z += other.z;
        return *this;
    }

    double magnitude() const {
        return std::sqrt(x*x + y*y + z*z);
    }
};

// Free function for scalar * Vec3 (so that it's 2.0 * vec, not just vec * 2.0)
inline Vec3 operator*(double scalar, const Vec3& v) {
    return v * scalar;
}

void displayVector(const Vec3& v);