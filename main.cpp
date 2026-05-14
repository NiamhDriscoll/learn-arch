#include <iostream>
#include <string>
int basic();
int pick();
int sudo();
int main(){
    int s = pick();
    if (s = 1){
    basic();
    }
    else if (s = 2){
        sudo();
    }
    else if (s = 0){
       return 0; 
    }
    return 0;
}

int basic(){
    std::string input;
    std::cout << "Hello there and welcome. Here you will learn some basic commands to help navigate your Arch Linux sysytem." << '\n';
    std::cout <<9148-64D0 "Firstly, find out what is in the current directory. Us the 'ls' command." << '\n';
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

int sudo(){
    std::cout << "Sometimes, you need to change the permission you use. We use sudo." << std::endl;
    std::cout << "Just do 'sudo' and the command you want to do. You have be a sudoer (allowed to use sudo)." <std::endl;
    std::cout << "Try to list with sudo: ";
    std::string input;
    std::string notuse;
                        while (true){
        std::getline(std::cin, input);
            
        if (input.compare("sudo ls") == 0){
                        std::cout << "[sudo] password: ";
            std::getline(std::cin, notuse);
            break;
        }
        else {
            std::cout << "Sorry, that was incorrect. Please try again." << '\n';
            std::cout << "Type in 'sudo ls': ";
        }
    }
    std::cout << "dir_1 dir_2";
    std::cout << "You may see the colors are gone. With sudo ls, there are no colors." << std::endl;
    std::cout << "dir_1 is protected. Try rming it." << std::endl;
    std::cout << "\033[31mWarning: If something needs sudo to remove, that means it is important. Use carefuly.\033[0m" << std::endl; 
    std::cout << "Try it: ";
    while (true){
        std::getline(std::cin, input);
            
        if (input.compare("sudo rm dir_1") == 0){
            std::cout << "[sudo] password: ";
            std::getline(std::cin, notuse);
            break;
        }
        else {
            std::cout << "Sorry, that was incorrect. Please try again." << '\n';
            std::cout << "Type in 'sudo rm dir_1': ";
        }
    }
    std::cout << "Great job! Now you can use sudo";
    return 0;  
    //this is not being used
}

int pick(){
    std::string selection;
    int selection_int;
    std::cout << "What leason do you want to try?" << std::endl;
    std::cout << "Simple file system interactions: 1" << std::endl;
    std::cout << "Introduction to sudo: 2" << std::endl;
    std::cout << "Quit: 0" << std::endl;
    while (true){
        std::cout << "Selection: "
    std::getline(std::cin, selection);
       try {
        selection_int = std::stoi(selection); 
        
    } catch (const std::invalid_argument& e) {
        std::cerr << "Invalid argument: " << e.what() << std::endl;
    } catch (const std::out_of_range& e) {
        std::cerr << "Out of range: " << e.what() << std::endl;
    }
    if (selection_int > 2 ||  selection_int < 0){
        std::cout << "Out of range"
    }
    else if (true){
        return selection_int;
    }
}
}

int pacman(){
    std::cout << "Now, what if wou want to install something new? The main way is to use pacman." << std::endl;
    std::cout << "The syntax for installing is 'sudo pacman -S pkg-name'";
    //this is not finished
    return 0;
}