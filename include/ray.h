#pragma once

#include "vec3.h"

class ray
{
private:
    vec3 A; // ray origin
    vec3 B; // ray direction

public:
    ray() {}
    ray(const vec3 &a, const vec3 &b)
    {
        A = a;
        B = b;
    }
    vec3 origin() const { return A; }
    vec3 direction() const { return B; }
    // ray function. p(t) moves the point along the ray
    vec3 point_at_parameter(float t) const { return A + t * B; }
};