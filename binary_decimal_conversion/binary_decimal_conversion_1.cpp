// Startup command: cd C:\VScode\c++\Other_programs\binary_decimal_conversion && g++ binary_decimal_conversion_1.cpp -o binary_decimal_conversion_1.exe && ./binary_decimal_conversion_1.exe
// Run command: g++ binary_decimal_conversion_1.cpp -o binary_decimal_conversion_1.exe && ./binary_decimal_conversion_1.exe

#include <iostream>

unsigned long long int convert_dec_to_bin(int num){

    unsigned long long int bin = 0;
    int remainder;

    for(unsigned long long int power = 1; num != 0; power = power * 10){

        remainder = num % 2;
        bin += remainder * power;
        num = num / 2;
    }

    return bin;
}

int convert_bin_to_dec(unsigned long long int bin){

    int dec;
    int remainder;

    for(unsigned long long int power = 1; bin != 0; power = power * 2){

        remainder = bin % 10; // (or bin % 2)
        dec += remainder * power;
        bin = bin / 10;
    }

    return dec;
}

int main(){

    int num;

    std::cout << "\nEnter an integral number: ";
    std::cin >> num;

    int bin_num = convert_dec_to_bin(num);
    int dec_num = convert_bin_to_dec(bin_num);

    std::cout << "\nBinary number of " << num << " --------> " << bin_num << "\n";
    std::cout << "Decimal number of " << bin_num << " --------> " << dec_num << "\n\n";

    return 0;
}