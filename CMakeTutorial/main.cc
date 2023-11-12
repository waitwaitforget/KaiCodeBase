
#include <cstdlib>
#include <iostream>
#include <string>
#include <vector>
#include "TutorialConfig.h"
// #include "src.h"
#include "Message.hpp"
using namespace std;

int main(int argc, char* argv[])
{
    if (argc < 2) {
        std::cout << argv[0] << " Version " << Tutorial_VERSION_MAJOR << "."
                  << Tutorial_VERSION_MINOR << "."
                  << Tutorial_VERSION_PATCH << std::endl;
        std::cout << "Usage: " << argv[0] << " number " << std::endl;
        return 1;
    }

    Message say_hello("Hello, CMake!");
    std::cout << say_hello << std::endl;

    // convert input to double
    const double inputValue = stod(argv[1]);

    vector<int> param {1,2,3,4,5};
    // calculate square root
    // const double outputValue = mysqrt(inputValue);
    std::cout << "The square root of " << inputValue
             //  << " is " << outputValue
              << std::endl;
    return 0;
}