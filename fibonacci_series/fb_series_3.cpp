// Run command: g++ fb_series_3.cpp -o fb_series_3.exe && ./fb_series_3.exe

#include <iostream>

// A structure to return updated "n" number of variables
struct two_var_struct{

    long long int prev, next, temp;
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

    int n = 7;

    std::cout << "Fibonacci series upto " << n << " terms: ";
    
    print_fb_series(n);

    std::cout << "\n";

    return 0;
}