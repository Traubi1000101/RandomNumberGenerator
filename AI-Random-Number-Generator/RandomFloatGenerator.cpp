#include "RandomFloatGenerator.h"

using namespace std;

RandomFloatGenerator::RandomFloatGenerator(float minValue, float maxValue)
    : m_minValue(minValue), m_maxValue(maxValue)
{
    // Seed the random number generator with the time since the epoch
    auto timeSinceEpoch = chrono::system_clock::now().time_since_epoch();
    srand(timeSinceEpoch.count());
}

float RandomFloatGenerator::GenerateValue()
{
    // Generate a random value in the range 0.0 to 1.0
    float randValue = static_cast<float>(rand()) / RAND_MAX;

    // Scale the value to the desired range
    return m_minValue + (m_maxValue - m_minValue) * randValue;
}
