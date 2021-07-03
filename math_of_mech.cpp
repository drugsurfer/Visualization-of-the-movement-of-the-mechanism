#include <iostream>
#include <cmath>
#include <GLFW/glfw3.h>
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
    float PhiAB()
    {
        return phi_0 + w * glfwGetTime();
    }
    float PhiDC()
    {
        return atan((yd - lenAB*sin(PhiAB()*pi/180))/(xd - lenAB*cos(PhiAB()*pi/180))) * 180/pi +
                acos((pow(xd - lenAB*cos(PhiAB()*pi/180), 2) + pow(yd - lenAB*sin(PhiAB()*pi/180), 2))/
                     (2 * lenBC * sqrt(pow(xd - lenAB*cos(PhiAB()*pi/180), 2) + pow(yd - lenAB*sin(PhiAB()*pi/180), 2)))) * 180 / pi;
    }
    float PhiBC()
    {
        return acos((pow(xd - lenAB*cos(PhiAB()*pi/180), 2) + pow(yd - lenAB*sin(PhiAB()*pi/180), 2))/
                    (2 * lenBC * sqrt(pow(xd - lenAB*cos(PhiAB()*pi/180), 2) +
                                      pow(yd - lenAB*sin(PhiAB()*pi/180), 2)))) * 180 / pi -
        atan((yd - lenAB*sin(PhiAB()*pi/180))/(xd - lenAB*cos(PhiAB()*pi/180))) * 180/ pi;
    }
    float S()
    {
        return (yd + 0.75f + 0.14f) / tan(gamma * pi / 180.0f);
    }
    float LenAB()
    {
            return lenAB;
    }
    float LenBC()
    {
        return lenBC;
    }
    float W()
    {
        return w;
    }
    float Xd()
    {
        return xd;
    }
    float Yd()
    {
        return yd;
    }
};
