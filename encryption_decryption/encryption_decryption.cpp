// Startup command: cd C:\VScode\c++\Other_programs\encryption_decryption && g++ encryption_decryption.cpp -o encryption_decryption.exe && ./encryption_decryption.exe
// Run command: g++ encryption_decryption.cpp -o encryption_decryption.exe && ./encryption_decryption.exe

#include <iostream>
#include <limits>

int main(){
    char message[50];
    char encrypted_message[50], decrypted_message[50];
    
    std::cout << "Enter message: ";
    std::cin >> message;

    int key = 10;

    return 0;
}