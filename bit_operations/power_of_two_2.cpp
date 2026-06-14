// Run command: g++ power_of_two_2.cpp -o power_of_two_2.exe && ./power_of_two_2.exe

// This program consists of a function that returns the value 'true' when a number is a positive power of two & false when the condition is unsatisfied.
// Consists of bit shift operator & arithmetic operation

#include <iostream>

bool pow_of_two(int num){

    if(num <= 0){

        return false;
    }

    int reference_num = 1 << (8 * sizeof(int) - 2); // --> 1 << 30 (shifting 1 to 31st bit)

    return reference_num % num == 0;  // --> Remainder with largest existing power of two & num
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
Enter a positive integral number: 512
512 is a power of two
*/