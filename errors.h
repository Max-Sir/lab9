#pragma once
#include "libs.h"
namespace lab9_space{
    class Exception {
    private:
        int warning;
    public:
        Exception() {
            warning = 0;
        };
        Exception(int error) {
            warning = error;
        }
        void Print()
        {
            if (this->warning == 3)
            {
                std::cout << "The map is empty!" << std::endl;
            }
        }
    };
}

