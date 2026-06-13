// Start-up command: cd C:\VScode\c++\Other_programs\error_handling_cin && g++ error_handling_cin.cpp -o error_handling_cin.exe && ./error_handling_cin.exe
// Run command: g++ error_handling_cin.cpp -o error_handling_cin.exe && ./error_handling_cin.exe

#include <iostream>

int main(){
    int num;

    std::cout << "Enter number: ";

    if(std::cin >> num){  // <--- operator_bool() returns 1 when the cin object's failbit is 0 (i.e. no error) & inversely when failbit is 1.
        std::cout << "Integer\n";
    }
    else{
        std::cout << "Not an integer\n";
    }
    return 0;
}