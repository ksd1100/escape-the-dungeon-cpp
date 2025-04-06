#include <chrono>
#include <iostream>
#include <string>
#include <thread>
#include <vector>
//std::string exitProgram; 
char continueAnswer;
int housekeeping(){
    std::cout << "Welcome to Escape the Dungeon." << std::endl;
    std::cout << "You find yourself trapped in a dark dungeon." << std::endl;
    std::cout << "Your mission is to find a way out." << std::endl;
    std::cout << "Are you sure, you want to continue? (Y/N): ";
    std::cin >> continueAnswer;
    return 0;
}

int detailLoop(){
    do
    {
        if (continueAnswer == 'Y')
        {
            break;
        }
        else if (continueAnswer == 'N')
        {
            break;
        }
        else
        {
            std::cerr << "Error: Please enter 'Y' or 'N'." << std::endl;
            std::cin >> continueAnswer;
        }
        
    } while (continueAnswer != 'N');

    if (continueAnswer == 'Y')
    {
        std::cout << "Continue game" << std::endl;
    }
    else
    {
        std::cout << "Exit game" << std::endl;
    }

    return 0;
}

// int endOfJob(){

// }

int main(){
    housekeeping();
    detailLoop();
    return 0;
}