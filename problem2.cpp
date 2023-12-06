#include <iostream>
#include <vector>

// Used solution for adding up individual numbers of an int

int main()
{
    int userInput;
    int step;

    std::cout << "Please enter a number: ";

    std::cin >> userInput;

    while (userInput > 9){
        step ++;
        int sum = 0;
        while (userInput > 0)
        {
            sum += userInput % 10;
            userInput /= 10;
        }
        std::cout << "Step:" << step << " - " << sum << std::endl;
        userInput = sum;
    }

/*

Lessons:
a%10 extracts smallest digit from number and continuously adds to sum

*/


}