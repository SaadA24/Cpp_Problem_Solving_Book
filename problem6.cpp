#include <iostream>
#include <string>
#include <cmath>	


// Implementing a quadratic function:

int main() 
{
    std::cout << "Please enter the coefficients a, b and c: " << std::endl;
    int a, b, c;
    std::cin >> a >> b >> c;
    std::cout << "a = " << a << ", " << "b = " << b << ", and c = " << c << std::endl;

    double root_one = (-b + sqrt((b*b) -(4 * a * c))) / (2 * a);
    double root_two = (-b - sqrt((b*b) -(4 * a * c))) / (2 * a);

    if(sqrt((b*b) -(4 * a * c)) > 0)
    {
        std::cout << "Root 1 = " << std::to_string(static_cast<int>(root_one)) << std::endl;
        std::cout << "Root 2 = " << std::to_string(static_cast<int>(root_two)) << std::endl;

    }
    if(sqrt((b*b) -(4 * a * c)) < 0)
    {
        std::cout << "Root 1 = " << std::to_string(root_one) << "i";
        std::cout << "Root 2 = " << std::to_string(root_two) << "i";
    }








    return 0;
}