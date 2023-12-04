#include <iostream>
#include <vector>
#include <stdio.h>

// Print random numbers based on input:

int main()
{
    int terms;
    std::vector<int> termsOutput;
    int seed;

    std::cout << "Enter the number of terms: ";
    std::cin >> terms;

    std::cout << "Input a seed: ";
    std::cin >> seed;

    for (int i = 1; i <= terms; i++)
    {
        srand(seed);
        int randomNumber = rand() % 100 + 1;
        termsOutput.push_back(randomNumber);
    }

    std::cout << "Here are " << terms << " numbers: " << std::endl;
    for (int i : termsOutput)
    {
        std::cout << i << " ";
    }
    return 0;
}

/*

Lessongs:
Can also use cin >> arr[size] to make an array with the right size everytime and then arr[i] in the loops.
Always break down the problem and solve incrementally.

*/