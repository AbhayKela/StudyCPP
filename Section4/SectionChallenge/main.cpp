#include<iostream>
// comment 


/* **********************
 * These multiline comments are mostly seen at top of program
 * comment1
 * comment2
 * comment3
 * *************************/ 


int main() {

    int x;
    
    std::cout << "Enter your favorite number between 1 and 100: 24" << std::endl;
    std::cin >> x;
    
    std::cout << "Amazing!! That's my favority number too!" << std::endl;
    std::cout << "Not really!!" << x << "  is my favority number" << std::endl;
    return 0;
}