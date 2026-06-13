// Run command: g++ fb_series_2.cpp -o fb_series_2.exe && ./fb_series_2.exe

#include <iostream>

int fb_num(int n){

    if(n == 1){

        return 0;
    }

    if(n == 2){
        
        return 1;
    }

    return fb_num(n - 1) + fb_num(n - 2);
}

void print_fb_series(int n){

    std::cout << "Fibonacci series upto " << n << " terms: ";

    for(int i = 1; i <= n; i++){

        std::cout << fb_num(i) << " ";
    }

    std::cout << "\n";
}

int main(){
    
    print_fb_series(10);

    return 0;
}