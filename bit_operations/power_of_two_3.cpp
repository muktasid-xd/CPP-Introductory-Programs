// Run command: g++ power_of_two_3.cpp -o power_of_two_3.exe && ./power_of_two_3.exe

// This program consists of a function that returns the value 'true' when a number is a positive power of two & false when the condition is unsatisfied.
// Consists of bit arithmetic (most efficient)

#include <iostream>

bool pow_of_two(int num){

    if(num <= 0){

        return false;
    }

    return (num & (num - 1)) == 0;
}

int main(){

    int num;

    std::cout << "Enter a positive integral number: ";
    std::cin >> num;

    if(std::cin.fail() || std::cin.peek() != '\n'){

        std::cout << "Enter a proper input\n";
        return 0;
    }
    
    if(pow_of_two(num)){

        std::cout << num << " is a power of two\n";
    }
    else{

        std::cout << num << " is not a power of two\n";
    }

    return 0;
}



/* Example output:
Enter a positive integral number: 16
16 is a power of two
*/