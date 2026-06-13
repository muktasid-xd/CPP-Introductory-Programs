// Run command: g++ fb_series_4.cpp -o fb_series_4.exe && ./fb_series_4.exe

// This program displays the fibonacci series upto n terms using simple recursive call.
// This clean & beautiful solution was suggested by Gemini (Google's AI model).
// (I personally loved such simple approach & hence, implemented this series using AI's solution).

#include <iostream>

void print_fb_series(int n, int prev = 0, int next = 1){

    if(n == 0){
        
        return;
    }

    std::cout << prev << " ";

    print_fb_series(n - 1, next, next + prev);
}


int main(){

    int n = 15;

    std::cout << "Fibonacci series upto " << n << " terms:\n";
    
    print_fb_series(n);

    std::cout << "\n";

    return 0;
}



/* Example output:
Fibonacci series upto 15 terms:
0 1 1 2 3 5 8 13 21 34 55 89 144 233 377 
*/