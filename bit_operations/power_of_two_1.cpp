// Run command: g++ power_of_two_1.cpp -o power_of_two_1.exe && ./power_of_two_1.exe

// This program consists of a function that returns the value 'true' when a number is a positive power of two & false when the condition is unsatisfied.
// Consists of loop

#include <iostream>

bool pow_of_two(int num){

    if(num <= 0){ // --> To avoid unpredictable behaviour of the loop

        return 0;
    }

    int auxiliary_num = num;
    int two_power_num = 1; // Initalizing with 2^(0) = 1

    while(auxiliary_num != 1){

        auxiliary_num = auxiliary_num >> 1; // --> Shifting the bits towards left until it is not equal to 1
        two_power_num *= 2; // --> Raising the power, to find the largest occupied non-zero bit
    }

    return (two_power_num & num) == num;  // --> Returns true when both the numbers are true powers of two, else false
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
Enter a positive integral number: 2048
2048 is a power of two
*/