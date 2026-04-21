#include <iostream>
#include <GLFW/glfw3.h>

GLFWwindow* StartGLFW();

int main() {
  GLFWwindow* window = StartGLFW();

  while(!glfwWindowShouldClose(window)) {

    glfwSwapBuffers(window); //swap buffers from back
    glfwPollEvents();  // poll events(input)
  }
}

GLFWwindow*  StartGLFW() {
  if(!glfwInit()) {
    std::cerr<<"failed to initialize glfw, panic!"<<std::endl;
    return nullptr;
  }

  GLFWwindow* window = glfwCreateWindow(800, 600, "gravity_sim", NULL, NULL);

  return window;
}
