#include <iostream>
#include <stdio.h>
#include <vector>

// Print 10 random distinct numbers:

int main() 
{
    srand(time(NULL));
    std::vector<int> randomNumberList;
    std::cout << "Here are 10 distinct numbers: ";

    
    for(int i = 1; i <= 10; i++)
    {
        int randomNumber = rand() % 100 + 1;
        randomNumberList.push_back(randomNumber);

        for(int j = 1; j <= 10; j++)
        {
            if(randomNumberList[j] == randomNumberList[i])
            {
                j--;
                break;
            }
        }
        std::cout << randomNumberList[i] << " ";
    }
    return 0;
}

/*

Lessons:
Can decrement by one after nested loop to ensure no two numbers are the same.
For arrays, update the array in the for loop using array[i], similiar to push_back for vector.

*/