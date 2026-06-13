// Run command: g++ error_handling_cin.cpp -o error_handling_cin.exe && ./error_handling_cin.exe

// This program displays the behaviour of cin and cout as "objects" of c++.
// It displays the error message when the user enters an incorrect input.

#include <iostream>

int main(){
    int num;

    std::cout << "Enter number: ";

    if(std::cin >> num){  // <--- operator_bool() returns 1 when the cin object's failbit is 0 (i.e. no error) & inverse when failbit is 1.
        std::cout << "Integer\n";
    }
    else{
        std::cout << "Not an integer\n";
    }
    return 0;
}



/* Example output: 
Enter number: hello
Not an integer
*/