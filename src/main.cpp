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

using namespace std;
using namespace logging;

int main()
{
    info("Main","Tortuga (Grant's Sandbox) pre-194903");
    
    return 0;
}