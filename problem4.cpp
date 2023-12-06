#include <iostream>
#include <stdio.h>

// Print 10 random distinct numbers:

int main() 
{
    srand(time(NULL));
    int randomNumberList[10];

    
    for(int i = 1; i < 10; i++)
    {
        std::cin >> randomNumberList[i];
        randomNumberList[i] = rand() % 100 + 1;

        for(int j = 1; j < i ; j++)
        {
            if(randomNumberList[j] == randomNumberList[i])
            {
                j--;
                break;
            }
        }
        std::cout << "Here are 10 distinct numbers: ";
        for(int i = 0; i < 10 < i++)
        std::cout << randomNumberList[i] << " ";
    }
    return 0;
}

/*

Lessons:
Can decrement by one after nested loop to ensure no two numbers are the same.
For arrays, update the array in the for loop using array[i], similiar to push_back for vector
Start putting cout in the function where it's supposed to be called to make it readable

*/