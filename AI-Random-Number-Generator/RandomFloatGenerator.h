#pragma once

#ifndef RANDOM_FLOAT_GENERATOR_H
#define RANDOM_FLOAT_GENERATOR_H

#include <cstdlib>      // for rand() and srand()
#include <ctime>        // for time()
#include <chrono>       // for std::chrono::system_clock
#include <iomanip>      // for std::setprecision
#include <conio.h>    // for getch() and kbhit

using namespace std;

class RandomFloatGenerator
{
public:
    RandomFloatGenerator(float minValue, float maxValue);
    float GenerateValue();

private:
    float m_minValue;
    float m_maxValue;
};

#endif  // RANDOM_FLOAT_GENERATOR_H