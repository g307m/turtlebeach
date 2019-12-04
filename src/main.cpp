#include <iostream>
#include <functional>


#include <logging.hpp>
#include <fastlane.hpp>

#ifdef _win32
#include <windows.h>
const sleep = Sleep;
#else
#include <unistd.h>
#endif
#include <GLFW/glfw3.h>

using namespace std;
using namespace logging;

int main()
{
    info("Main","Tortuga (Grant's Sandbox) pre-194904");
    if(!glfwInit()){
        fatal("glfwInit","GLFW Initialization failed, exiting now.");
        return 2;
    }

    return 0;
}