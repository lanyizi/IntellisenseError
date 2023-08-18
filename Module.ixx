module;
#include <iostream>
#include <string>
export module Module;

export void MyFunc();

module: private;

using namespace std::literals;

void MyFunc()
{
    std::cout << "Hello World!"s << std::endl;
}