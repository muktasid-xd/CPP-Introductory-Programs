// Run command: g++ fb_series_1.cpp -o fb_series_1.exe && ./fb_series_1.exe

#include <iostream>

void print_fb_series(int n){
    
    long long int prev = 0;
    long long int next = 1;
    long long int temp;

    std::cout << "First " << n << " terms of fibonacci series:\n";

    for(int i = 0; i < n; i++){

        temp = prev;
        prev = next;
        next = next + temp;

        std::cout << temp << "\n";
    }

    std::cout << "\n";
}

int main(){

    print_fb_series(50);

    return 0;
}