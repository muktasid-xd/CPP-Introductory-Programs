// Run command: g++ sum_of_digits.cpp -o sum_of_digits.exe && ./sum_of_digits.exe

// This program calculates the total sum of each digit of the specified 'n' integer.

#include <iostream>

int sum_of_digits(int n){
    
    if(n == 0){
        
        return 0;
    }

    return n % 10 + sum_of_digits(n / 10);
}

int main(){

    int n = 12045;

    std::cout << "Sum of all digits of " << n << ": " << sum_of_digits(n) << "\n";

    return 0;
}



/* Example output:
Sum of all digits of 12045: 12
*/