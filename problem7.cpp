#include <iostream>
#include <cmath>

// test if program is a square

int main() {

    std::cout << "Please enter a number";
    int userInput;
    std::cin >> userInput;

    auto squareCheck = userInput / sqrt(userInput);

    if(squareCheck == int(squareCheck))
    {
        std::cout << userInput << " is a perfect square!";
    }
    else 
    {
        std::cout << userInput << " is not a perfect square!";
    }

    return 0;
}

/*

Lessons:
Get stuck on previous problem, then move on to next

*/