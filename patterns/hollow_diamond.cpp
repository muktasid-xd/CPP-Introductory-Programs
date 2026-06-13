// Run command: g++ hollow_diamond.cpp -o hollow_diamond.exe && ./hollow_diamond.exe

// This program displays a hollow diamond-like pattern.
// 'n' --> (total rows - 1) / 2

#include <iostream>

int main(){
    int n;

    std::cout << "Enter number: ";
    std::cin >> n;

    std::cout << "\n";

    // Upper triangle
    for(int i = 0; i < n; i++){

        for(int j = (n - 1) - i; j > 0; j--){

            std::cout << " ";
        }

        std::cout << "*";

        for(int j = 0; j < 2 * i - 1; j++){

            std::cout << " ";
        }

        if(i > 0){

            std::cout << "*";
        }

        std::cout << "\n";
    }

    // Lower triangle
    for(int i = 0; i < n - 1; i++){

        for(int j = 0; j < i + 1; j++){

            std::cout << " ";
        }

        std::cout << "*";

        for(int j = 2 * (n - i) - 5; j > 0; j--){

            std::cout << " ";
        }

        if(i < n - 2){

            std::cout << "*";
        }

        std::cout << "\n";
    }

    std::cout << "\n"; // Extra newline

    return 0;
}



/* Example output:
Enter number: 5

    *
   * *
  *   *
 *     *
*       *
 *     *
  *   *
   * *
    *

*/