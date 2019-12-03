#include <fastlane.hpp>
#include <iostream>
#ifdef _win32
#include <windows.h>
const sleep = Sleep;
#else
#include <unistd.h>
#endif