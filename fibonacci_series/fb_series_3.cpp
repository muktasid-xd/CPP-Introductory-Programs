// Run command: g++ fb_series_3.cpp -o fb_series_3.exe && ./fb_series_3.exe

// This program displays the fibonacci series upto n terms using recursive call by returning structure.
// (efficient than fb_series_2.cpp)

#include <iostream>

// A structure to return updated "n" number of variables
struct two_var_struct{

    long long int prev, next, temp; // <-- main variables are prev & next, and thus, the name two var struct.
};

// Datatype -> user-defined structure: two_var_struct 
two_var_struct print_fb_series(int n){

    two_var_struct fb_struct;

    if(n == 1){

        fb_struct.prev = 0;
        fb_struct.next = 1;

        std::cout << fb_struct.prev << " ";

        return fb_struct;
    }

    fb_struct = print_fb_series(n - 1);

    fb_struct.temp = fb_struct.prev + fb_struct.next;
    fb_struct.prev = fb_struct.next;
    fb_struct.next = fb_struct.temp;

    std::cout << fb_struct.prev << " ";

    return fb_struct;
}

int main(){

    int n = 17;

    std::cout << "Fibonacci series upto " << n << " terms:\n";   
    print_fb_series(n);

    std::cout << "\n";

    return 0;
}



/* Example output:
Fibonacci series upto 17 terms:
0 1 1 2 3 5 8 13 21 34 55 89 144 233 377 610 987 
*/