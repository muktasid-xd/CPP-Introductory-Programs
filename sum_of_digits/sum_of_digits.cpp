// Startup command: cd C:\VScode\c++\Other_programs\sum_of_digits && g++ sum_of_digits.cpp -o sum_of_digits.exe && ./sum_of_digits.exe
// Run command: g++ sum_of_digits.cpp -o sum_of_digits.exe && ./sum_of_digits.exe

#include <iostream>

int sum_of_digits(int n){
    
    if(n == 0){
        
        return 0;
    }

    return n % 10 + sum_of_digits(n / 10);
}

int main(){

    std::cout << sum_of_digits(12045) << "\n";

    return 0;
}