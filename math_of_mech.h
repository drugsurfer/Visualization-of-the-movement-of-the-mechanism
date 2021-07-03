#ifndef MATH_OF_MECH_H
#define MATH_OF_MECH_H
#include <GLFW/glfw3.h>
#include <iostream>
#include <cmath>
class Mech
{
private:
    const float lenAB = 0.12f;
    const float lenBC = 0.45f;
    const float xd = 0.75f;
    const float yd = 0.1f;
    const float phi_0 = 45.0f;
    const float w = 30.0f;
    const float pi = acos(-1);
    float gamma = 180 - 60 - PhiDC();
public:
    float PhiAB();
    float PhiDC();
    float PhiBC();
    float S();
    float LenAB();
    float LenBC();
    float W();
    float Xd();
    float Yd();
};

#endif // MATH_OF_MECH_H
