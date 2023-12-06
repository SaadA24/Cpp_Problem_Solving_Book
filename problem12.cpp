#include <iostream>
#include <string>

// Security level of password

int main(){
        
    std::string password;

    std::cout << "Please input a password: " << std::endl;
    getline(std::cin, password);

    std::cout << "Password security: ";


    for(int i = 0; i < password.length(); i++)
    {
        if(password.length() >= 19)
        {
            std::cout << "Very low";
        }
        else if (password[i] == toupper(password[i]) && password.length() >= 10)
        {
            std::cout << "low";
        }
        else if (password[i] == tolower(password[i]) && password[i] == toupper(password[i]) && password.length() >= 10)
        {
            std::cout << "medium";
        }
    }

    
    

    
    return 0;
}