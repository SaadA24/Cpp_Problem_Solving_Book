#include <iostream>
#include <vector>
#include <string>


int main()
{
    std::string userInput;
    int result = 0;

    std::cout << "Please enter a number: ";

    std::cin >> userInput;

    for(int i : userInput)
    {
        result += i;
        std::cout << int(result) << std::endl;
    }

    




}