#include <iostream>
#include <string>
int basic();

int main(){
    basic();
    return 0;
}

int basic(){
    std::string input;
    std::cout << "Hello there and welcome. Here you will learn some basic commands to help navigate your Arch Linux sysytem." << '\n';
    std::cout << "Firstly, find out what is in the current directory. Us the 'ls' command." << '\n';
    std::cout << "Type in 'ls': ";
    while (true){
        std::cin >> input;
            
        if (input.compare("ls") == 0){
            break;
        }
        else {
            std::cout << "Sorry, that was incorrect. Please try again." << '\n';
            std::cout << "Type in 'ls': ";
        }
    }
    std::cout << "\033[42mdir\033[0m" << std::endl;
    //std::cout << "\033[32mprogram\033[0m";
    std::cout << "Looks like there is a folder. Folders are highlighted with green. Change to it by doing 'cd' and the folder name" << std::endl;
    std::cout << "Try it on your own: ";
    while (true){
        std::cin >> input;
            
        if (input.compare("cd dir") == 0){
            break;
        }
        else {
            std::cout << "Sorry, that was incorrect. Please try again." << '\n';
            std::cout << "Type in 'cd dir': ";
        }
    }

    std::cout << "Good job! you changed folders. Now lets see what is inside." << std::endl;
    std::cout << "Try it: ";
        while (true){
        std::cin >> input;
            
        if (input.compare("ls") == 0){
            break;
        }
        else {
            std::cout << "Sorry, that was incorrect. Please try again." << '\n';
            std::cout << "Type in 'ls': ";
        }
    }
    std::cout << "\033[32mprogram\033[0m";
    std::cout << "\033[42manotherdir\033[0m" << std::endl;
    

    return 0;

}

