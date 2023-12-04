#include <iostream>

// Hailstone Sequence:


int main ()
{
    int userInput;
    int stepCount = 1;

    std::cout << "Please enter a number to generate its Hailstone Sequence: ";

    std::cin >> userInput;

    while(userInput != 1) 
    {
        if(userInput % 2 != 0)
            {
                userInput = 3 * userInput + 1;
                std::cout << "step: "  << stepCount << " = " << userInput << std::endl;
            }
        else
            {
                userInput /= 2;
                std::cout << "step: "  << stepCount << " = " << userInput << std::endl;
            }
        stepCount++;
    }       
    return 0;
};

/* 

Lessons:
Needed to use endl after the cout and increment the step counter to get "steps" printed.

*/


