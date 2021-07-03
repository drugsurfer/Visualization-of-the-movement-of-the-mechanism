#include <GLFW/glfw3.h>
#include <iostream>
#include <cmath>

using namespace std;

void display();

int main()
{

    if (!glfwInit())
    {
        return 1;
    }

    GLFWwindow *window = glfwCreateWindow(1200, 800,
                                          "Окно",
                                          nullptr, nullptr);

    if (!window)
    {
        glfwTerminate();
        return 2;
    }

    glfwMakeContextCurrent(window);
      glClearColor(1.0f, 1.0f, 1.0f, 1.0f);

    while (!glfwWindowShouldClose(window))
    {
        display();

        glfwSwapBuffers(window);
    }

    glfwTerminate();

    return 0;
}


