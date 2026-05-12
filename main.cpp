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
           std::getline(std::cin, input);
            
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
        std::getline(std::cin, input);
            
        if (input.compare("cd dir") == 0){
            break;
        }
        else {
            std::cout << input;
            std::cout << "Sorry, that was incorrect. Please try again." << '\n';
            std::cout << "Type in 'cd dir': ";
        }
    }

    std::cout << "Good job! you changed folders. Now lets see what is inside." << std::endl;
    std::cout << "Try it: ";
        while (true){
        std::getline(std::cin, input);
            
        if (input.compare("ls") == 0){
            break;
        }
        else {
            std::cout << "Sorry, that was incorrect. Please try again." << '\n';
            std::cout << "Type in 'ls': ";
        }
    }
    std::cout << "\033[32mprogram \033[0m";
    std::cout << "\033[42manotherdir\033[0m" << std::endl;
    std::cout << "There is a folder and an executable. We know this because one has green text (differant from green highlight)" << std::endl;
    std::cout << "Run it with './file_name': "; 
        while (true){
        std::getline(std::cin, input);
            
        if (input.compare("./program") == 0){
            break;
        }
        else {
            std::cout << "Sorry, that was incorrect. Please try again." << '\n';
            std::cout << "Type in './program': ";
        }
    }
    std::cout << "hello user, you ran the program" << std::endl;
    std::cout << "Great job. Now lets see what is inside the sub-folder. This time, instead of moving inside you can directly 'ls' it with 'ls folder_name'" << std::endl;
    std::cout << "Try it: ";
            while (true){
        std::getline(std::cin, input);
            
        if (input.compare("ls anotherdir") == 0){
            break;
        }
        else {
            std::cout << "Sorry, that was incorrect. Please try again." << '\n';
            std::cout << "Type in 'ls anotherdir': ";
        }
    }
    std::cout << "\033[32mnot_important \033[0m";
    std::cout << "\033[42mdeleteme\033[0m" << std::endl;
    std::cout << "This stuff is not important. We can delete it. Use the command 'rm file_name'. But for folder, you have to add '-r' to the end to be recursive." << std::endl;
    std::cout << "\033[31mWarning: in real usage, be careful. You can accidentaly delete important things.\033[0m" << std::endl;    
    std::cout << "Try it: ";
                while (true){
        std::getline(std::cin, input);
            
        if (input.compare("rm anotherdir -r") == 0){
            break;
        }
        else {
            std::cout << "Sorry, that was incorrect. Please try again." << '\n';
            std::cout << "Type in 'rm anotherdir -r': ";
        }
    }
    std::cout << "Great! Now ls: ";
                    while (true){
        std::getline(std::cin, input);
            
        if (input.compare("ls") == 0){
            break;
        }
        else {
            std::cout << "Sorry, that was incorrect. Please try again." << '\n';
            std::cout << "Type in 'ls': ";
        }
    }
    std::cout << "\033[32mprogram \033[0m";
    std::cout << "Now the folder is gone. Great job!" << std::endl;
    return 0;

}

