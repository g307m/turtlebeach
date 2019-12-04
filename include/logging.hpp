#pragma once

#include <iostream>

using namespace std;
namespace logging
{
    void startlog();
    void info(string messenger,string message);
    void warn(string messenger,string message);
    void fatal(string messenger,string message);
}