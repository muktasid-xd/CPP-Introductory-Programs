// Run command: g++ optmized_multiples_of_3.cpp -o optmized_multiples_of_3.exe && ./optmized_multiples_of_3.exe

#include <iostream>

int main(){
    int i, start, num, sum = 0;

    std::cout << "Enter number: ";

    if(!(std::cin >> num) || num < 0){
        std::cout << "Enter a valid number";
        return 0;
    }

    start = 1;

    
    if(num >= 3)
    {
        while(start % 3 != 0){
            start = start + 1;
        }

        i = start;

        while(i <= num){
            sum = sum + i;
            i = i + 3;
        }
    }
    

    std::cout << "Sum of all the multiples until " << num << " = " << sum << "\n";

    return 0;
}