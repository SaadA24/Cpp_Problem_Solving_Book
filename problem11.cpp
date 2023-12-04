#include <iostream>

int main() {

    std::cout << "Enter a sentence: ";
    std::string userInput;
    getline(std::cin, userInput);

    std::cout << "Original sentence: " << userInput << std::endl;
    std::cout << "Capitalised sentence: ";

  
    for(int i = 0; i < userInput.length(); i++)
    {
        std::string result = "";
        result += toupper(userInput[i]);
        std::cout << result;
    }
    
    return 0;
}

/*

Lessons:
Remember to add the ext of the file and use getline

*/