//A basic command line password test. Purely meant for testing brute force guessing.

#include <iostream>

std::string pass = "123456";

int main(){
    std::string userIn;
    int attempts = 0;

    std::cout << "Set password : ";
    std::cin >> pass;

    while (userIn != pass){
        std::cout << "Enter password : ";
        std::cin  >> userIn;
        ++attempts;
    }

    std::cout << "Password Correct!" << '\n';
    std::cout << attempts << " attempts." << '\n';  
}