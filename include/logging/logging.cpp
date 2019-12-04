#include "logging.hpp"

#include <chrono>

using namespace std;
using namespace std::chrono;

namespace logging
{
    namespace {
        bool logging_started = true;
        auto logging_start = high_resolution_clock::now();
        auto prefix()
        {
            return duration_cast<std::chrono::microseconds>( high_resolution_clock::now() - logging_start ).count();
        }
    }
    void startlog()
    {
        logging_started = true;
    }
    void info(string messenger,string message)
    {
        cout<<"["<<prefix()<<"]:[INFO,"<<messenger<<"]:\t"<<message<<endl;
    }
    void warn(string messenger,string message)
    {
        cout<<"["<<prefix()<<"]:[WARN,"<<messenger<<"]:\t"<<message<<endl;
    }
    void fatal(string messenger,string message)
    {
        cout<<"["<<prefix()<<"]:[FATAL,"<<messenger<<"]:\t"<<message<<endl;
    }
    
}