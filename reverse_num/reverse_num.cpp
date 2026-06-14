// Run command: g++ reverse_num.cpp -o reverse_num.exe && ./reverse_num.exe


#include <iostream>
#include <limits>

int reverse_num(int num){

    int intMAX = std::numeric_limits<int>::max() - 6;
    int intMIN = std::numeric_limits<int>::min() + 7;

    if((num < intMIN) || (num > intMAX)){  // --> To avoid overflow when the integer is reversed (SUGGESTED BY AI)

        return 0;
    }

    int rev_num = 0;
    int digit;

    while(num != 0){

        digit = num % 10;
        rev_num = (rev_num * 10) + digit;
        num = num / 10;
    }

    return rev_num;
}

int main(){

    int num;

    std::cout << "Enter an integer: ";
    std::cin >> num;

    if(std::cin.fail() || (std::cin.peek() != '\n')){

        std::cout << "Invalid input";
        return 0;
    }

    std::cout << "Reversed integer: " << reverse_num(num) << "\n";

    return 0;
}



/* Example output:
Enter an integer: 3456
Reversed integer: 6543
*/