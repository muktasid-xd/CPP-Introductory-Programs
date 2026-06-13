// Startup command: cd C:\VScode\c++\Other_programs\patterns && g++ butterfly.cpp -o butterfly.exe && ./butterfly.exe
// Run command: g++ butterfly.cpp -o butterfly.exe && ./butterfly.exe

#include <iostream>

int main(){
    int n;

    std::cout << "Enter number: ";
    std::cin >> n;

    std::cout << '\n';

    // Upper pattern
    for(int i = 0; i < n; i++){

        for(int j = 0; j < i + 1; j++){

            std::cout << "* ";
        }

        for(int j = 2 * (n - 1 - i); j > 0; j--){

            std::cout << "  ";
        }

        for(int j = 0; j < i + 1; j++){

            std::cout << "* ";
        }

        std::cout << '\n';
    }

    // Lower pattern
    for(int i = 0; i < n; i++){

        for(int j = n - i; j > 0; j--){

            std::cout << "* ";
        }

        for(int j = 0; j < 2 * i; j++){

            std::cout << "  ";
        }

        for(int j = n - i; j > 0; j--){

            std::cout << "* ";
        }

        std::cout << '\n';
    }

    return 0;
}