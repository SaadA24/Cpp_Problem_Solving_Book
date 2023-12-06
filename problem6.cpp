#include <iostream>
#include <string>
#include <cmath>	
#include <cstdlib>


// Implementing a quadratic function:

int main() 
{
    std::cout << "Please enter the coefficients a, b and c: " << std::endl;
    int a, b, c;
    std::cin >> a >> b >> c;
    std::cout << "a = " << a << ", " << "b = " << b << ", and c = " << c << std::endl;

    double numerator = (b*b) -(4 * a * c);
    double root1 = (-b - sqrt(numerator)) / (2 * a);
    double root2 = (-b + sqrt(numerator)) / (2 * a);

    if (a == 0){
        exit(1);
    }

    if(numerator < 0)
    {
        numerator *= -1;
        std::cout << "Root 1 = " << -b/(2*a) << "+" << sqrt(numerator)/(2*a) << "i" << std::endl;
        std::cout << "Root 2 = " << -b/(2*a) << "-" << sqrt(numerator)/(2*a) << "i" << std::endl;
    }
    else if(numerator == 0)
    {
        std::cout << "There are two roots equal to: " << root1;
    }
    else
    {
        std::cout << "Root 1 = " << root1 << std::endl;
        std::cout << "Root 2 = " << root2 << std::endl;

    }

    return 0;
}

/*

Lessons:
Isolate the part of the function which is the same
sqrt shoudln't be included in variable because an element can be less than 0, giving NAN.
Look at what the example output is for the cout, and try and replicate what it should be
break down problem into conditions solved easily first

*/