// Run command: g++ calculator.cpp -o calculator.exe && ./calculator.exe

// This program performs basic arithmetic operation with user friendly interface

#include <iostream>
#include <limits>
#include <cmath>

int main(){
    int loop = 1, operation;
    double num1, num2, result;

    while(loop == 1){

        std::cout << "Which operation would you like to perform?\n";
        std::cout << "[Enter - 1] ---> Addition\n";
        std::cout << "[Enter - 2] ---> Subtraction\n";
        std::cout << "[Enter - 3] ---> Multiplication\n";
        std::cout << "[Enter - 4] ---> Division\n";
        std::cout << "[Enter - 5] ---> Modulo\n";
        std::cout << "[Enter - 6] ---> Exit\n";

        std::cout << "--->>> ";
        std::cin >> operation;

        if(std::cin.fail() || operation > 6){   // <--- Returns 1 when failbit = 1, returns 0 when failbit = 0

            std::cout << "Enter a valid input\n\n";
            std::cin.clear();  // <--- Resets the failbit
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //<--- CLears buffer
            continue;

        }
        else if(operation == 6){

            loop = 0;
            std::cout << "\nExiting..." << std::endl;
            continue;

        }
        else{

            while(true){

                std::cout << "Enter the first number: ";
                std::cin >> num1;

                if(std::cin.fail()){

                    std::cout << "Enter a valid input (Either an integral or decimal number)\n";
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

                }
                else{

                    break;

                }

            }

            while(true){

                std::cout << "Enter the second number: ";
                std::cin >> num2;

                if(std::cin.fail()){

                    std::cout << "Enter a valid input (Either an integral or decimal number)\n";
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

                }
                else{

                    break;

                }

            }

            if(operation == 1){

                result = num1 + num2;
                std::cout << num1 << " + " << num2 << " = " << result << "\n\n";

            }
            else if(operation == 2){

                result = num1 - num2;
                std::cout << num1 << " - " << num2 << " = " << result << "\n\n";

            }
            else if(operation == 3){

                result = num1 * num2;
                std::cout << num1 << " * " << num2 << " = " << result << "\n\n";

            }
            else if(operation == 4){

                if(num2 == 0){

                    std::cout << "Zero Division Error\n\n";
                    
                }
                else{

                    result = num1 / num2;
                    std::cout << num1 << " / " << num2 << " = " << result << "\n\n";

                }
            }
            else if(operation == 5){

                if(num2 == 0){

                    std::cout << "Divisor cannot be zero\n\n";

                }
                else{

                    result = fmod(num1 , num2);
                    std::cout << num1 << " % " << num2 << " = " << result << "\n\n";

                }
            }

        }
    
    }
    
    return 0;
}



/* Example output:
Which operation would you like to perform?
[Enter - 1] ---> Addition
[Enter - 2] ---> Subtraction
[Enter - 3] ---> Multiplication
[Enter - 4] ---> Division
[Enter - 5] ---> Modulo
[Enter - 6] ---> Exit
--->>> 4
Enter the first number: 3
Enter the second number: 0
Zero Division Error

Which operation would you like to perform?
[Enter - 1] ---> Addition
[Enter - 2] ---> Subtraction
[Enter - 3] ---> Multiplication
[Enter - 4] ---> Division
[Enter - 5] ---> Modulo
[Enter - 6] ---> Exit
--->>> 2
Enter the first number: 89
Enter the second number: 54
89 - 54 = 35

Which operation would you like to perform?
[Enter - 1] ---> Addition
[Enter - 2] ---> Subtraction
[Enter - 3] ---> Multiplication
[Enter - 4] ---> Division
[Enter - 5] ---> Modulo
[Enter - 6] ---> Exit
--->>> 6

Exiting...
*/