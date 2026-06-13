// Startup command: cd C:\VScode\c++\Other_programs\fibonacci_series && g++ fb_series_4.cpp -o fb_series_4.exe && ./fb_series_4.exe
// Run command: g++ fb_series_4.cpp -o fb_series_4.exe && ./fb_series_4.exe


// This solution was suggested by Google's AI model, Gemini.

#include <iostream>

void print_fb_series(int n, int prev = 0, int next = 1){

    if(n == 0){
        
        return;
    }

    std::cout << prev << " ";

    print_fb_series(n - 1, next, next + prev);
}


int main(){

    int n = 7;

    std::cout << "Fibonacci series upto " << n << " terms: ";
    
    print_fb_series(n);

    std::cout << "\n";

    return 0;
}