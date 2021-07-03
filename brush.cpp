
#include <GLFW/glfw3.h>
#include <iostream>
#include <cmath>
class Brush
{
public :

    static void printLine(float x1, float y1, float x2, float y2)
    {
    glLineWidth(4);
    glBegin(GL_LINES);

    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(x1, y1);
    glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(x2, y2);

    glEnd();
    }

    static void printKnot(float x, float y, int sections = 36) //отрисовка окружности
    {
    static const float pi = acos(-1.0f);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x, y);
    for (int s = 0; s <= sections; ++s)
    {
    float a = 360.0f / sections * s / 180.0f * pi;
    glVertex2f(0.02f * cos(a),
    0.02f * sin(a));
    }
    glEnd();
    }

    static void printRectangle(float a, float b)
    {
    glBegin(GL_LINE_LOOP);
    glVertex2f(a, b);
    glVertex2f(a, -b);
    glVertex2f(-a, -b);
    glVertex2f(-a, b);
    glEnd();
    }

    static void printTriangle(float degrees = 0.0f)
    {
        glRotatef(degrees, 0.0f, 0.0f, 1.0f);
        glBegin(GL_TRIANGLES);
                glVertex2f(0.0f, 0.0f);
                glVertex2f(0.05f, -0.07f);
                glVertex2f(-0.05f, -0.07f);
        glEnd();
        glRotatef(-degrees, 0.0f, 0.0f, 1.0f);

    }

};


