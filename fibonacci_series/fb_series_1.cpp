// Run command: g++ fb_series_1.cpp -o fb_series_1.exe && ./fb_series_1.exe

// This program displays the fibonacci series upto n terms using for loop.

#include <iostream>

void print_fb_series(int n){
    
    long long int prev = 0;
    long long int next = 1;
    long long int temp;

    for(int i = 0; i < n; i++){

        temp = prev;
        prev = next;
        next = next + temp;

        std::cout << temp << " ";
    }

    std::cout << "\n";
}

int main(){

    int num = 25;

    std::cout << "First " << num << " terms of fibonacci series:\n";
    print_fb_series(num);

    std::cout << "\n";

    return 0;
}



/* Example output:
First 25 terms of fibonacci series:
0 1 1 2 3 5 8 13 21 34 55 89 144 233 377 610 987 1597 2584 4181 6765 10946 17711 28657 46368
*/