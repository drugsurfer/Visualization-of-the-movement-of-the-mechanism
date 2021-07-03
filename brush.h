#ifndef BRUSH_H
#define BRUSH_H

#include <GLFW/glfw3.h>
#include <iostream>
#include <cmath>
class Brush
{
public :
    static void printLine(float x1, float y1, float x2, float y2);
    static void printKnot(float x, float y, int sections = 36);
    static void printRectangle(float a, float b);
    static void printTriangle(float degrees = 0.0f);

};

#endif // BRUSH_H
