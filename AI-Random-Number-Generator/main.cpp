#include <iostream>
#include "RandomFloatGenerator.h"

int main(int argc, char* argv[])
{
    const int numValues = 5;
    float values[numValues];

    // Check if the minimum and maximum values were provided as command line arguments
    float minValue, maxValue;
    if (argc == 3)
    {
        minValue = atof(argv[1]);
        maxValue = atof(argv[2]);
    }
    else
    {
        // Prompt the user for the minimum and maximum values
        cout << "Enter the minimum value: ";
        cin >> minValue;
        cout << "Enter the maximum value: ";
        cin >> maxValue;
    }

    // Create an instance of the random float generator
    RandomFloatGenerator generator(minValue, maxValue);

    // Generate and print the random values
    for (int i = 0; i < numValues; i++)
    {
        values[i] = generator.GenerateValue();

        // Round the value to 2 decimal places and print it
        cout << "Value " << i << ": " << fixed << setprecision(0) << values[i] << endl;
    }

    // Wait for a key press before closing the program
    cout << "Press any key to continue...";
    while (!_kbhit);
    _getch();

    return 0;
}