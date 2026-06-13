// Run command: g++ fb_series_2.cpp -o fb_series_2.exe && ./fb_series_2.exe

// This program displays the fibonacci series upto n terms using recursive call for each term.
// (inefficient & requires high computing power)

#include <iostream>

int fb_num(int n){

    if(n == 1){

        return 0;
    }

    if(n == 2){
        
        return 1;
    }

    return fb_num(n - 1) + fb_num(n - 2);  // <-- Involves branching of each term in recursive call
}

void print_fb_series(int n){

    for(int i = 1; i <= n; i++){

        std::cout << fb_num(i) << " ";
    }

    std::cout << "\n";
}

int main(){

    int n = 20;

    std::cout << "Fibonacci series upto " << n << " terms:\n";    
    print_fb_series(n);

    std::cout << "\n";

    return 0;
}



/* Example output:
Fibonacci series upto 20 terms:
0 1 1 2 3 5 8 13 21 34 55 89 144 233 377 610 987 1597 2584 4181 
*/