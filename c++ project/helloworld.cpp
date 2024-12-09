#include <iostream>

int main(){
    int favoriteNumber;
//Ask the user for their favorite number
    std::cout << "Enter your favorite number: ";
    std::cin >> favoriteNumber;
    // Double the number
    int doubledNumber =favoriteNumber * 2;
    //Display the result
    std::cout << "your favoritenumber doubled is: " << doubledNumber << std::endl;
    return 0;
}