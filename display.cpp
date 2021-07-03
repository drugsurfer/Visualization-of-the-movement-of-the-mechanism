#include <GLFW/glfw3.h>
#include <iostream>
#include <cmath>
#include "brush.h"
#include "math_of_mech.h"
void display()
{

    Mech mech;
    glfwPollEvents();

    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();


    glTranslatef(-0.5f, 0.0f, 0.0f);
    Brush :: printKnot(0.0f, 0.0f);
    Brush :: printTriangle();
    glRotatef(mech.PhiAB(), 0.0f, 0.0f, 1.0f);
    Brush :: printLine(0.0f,0.0f, mech.LenAB() ,mech.LenAB());
    glTranslatef(mech.LenAB() , mech.LenAB() , 0.0f);
    Brush :: printKnot(0.0f, 0.0f);

    glRotatef(-mech.PhiAB(), 0.0f, 0.0f, 1.0f);
    glRotatef(-mech.PhiBC(), 0.0f, 0.0f, 1.0f);
    Brush :: printLine(0.0f, 0.0f, mech.LenBC(), mech.LenBC());

    glLoadIdentity();

    glTranslatef(mech.Xd() - 0.1f - 0.5f, mech.Yd() + 0.75f, 0.0f);
    Brush :: printTriangle(180.0f);
    Brush :: printKnot(0.0f, 0.0f);
    glRotatef(180 + mech.PhiDC(), 0.0f, 0.0f, 1.0f);
    Brush :: printLine(0.0f, 0.0f, mech.LenBC(),mech.LenBC());
    glTranslatef(mech.LenBC(), mech.LenBC(), 0.0f);
    Brush :: printKnot(0.0f, 0.0f);
    glTranslatef(-mech.LenBC(), -mech.LenBC(), 0.0f);
    glRotatef(20, 0.0f, 0.0f, 1.0f);
    Brush :: printLine(0.0f, 0.0f, 0.9f, 0.9f);

    glLoadIdentity();
    glTranslatef(mech.Xd() + mech.S() - 0.518f, -0.1f, 0.0f);
    Brush :: printRectangle(0.09f, 0.05f);
    Brush :: printKnot(0.0f, 0.0f);
    glRotatef(66 + mech.PhiDC(), 0.0f, 0.0f, 1.0f);
    Brush :: printRectangle(0.09f, 0.05f);


    glFlush();
}
