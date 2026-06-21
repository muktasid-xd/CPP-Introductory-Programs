// Run command: g++ variable_ini_and_pointer_deref_behaviour.cpp -o variable_ini_and_pointer_deref_behaviour.exe && ./variable_ini_and_pointer_deref_behaviour.exe

// This program explains the variable initialization process & dereferenced pointer behaviour
// (The terms written in the comments are not the specific programming terms, they are only for explanation purpose)

#include <iostream>
#include <cstdlib>

int main(){
    

    /* Process of variable initialization explained by the given example */



    // Assigning a value to the variable
    {

        int x = 10; 
        // 1 --> Object of 4 bytes is created at a specific memory location with assigned memory address
        // 2 --> The value "10" is then stored in that location of tthe object.
    }



    /* Behaviour of pointers (dereferencing):
    - Pointers will dereference (*ptr) ALWAYS into object.
    - The value stored in that object will only be read when needed.
    The two cases are provided below */



    /* CASE 1: Pointer behaviour to dereference to only object while avoiding to read its value.
    Creating a variable in heap memory (which is much different than direct stack memory implementation --> int x = 10) */
    {

        /* Assigning an integer pointer 'ptr' pointing to 4 bytes (integer size) in the heap memory 
        (We have avoided stack memory, since heap memory allows more control over value unlike than stack memory) */

        int *ptr = (int *)malloc(sizeof(int)); 

        // Now to assign that garbage value stored in object pointed by ptr with a name "var_name", we follow below instructions:
        // Creating a reference 'var_name' with ampersand (&) as prefix.
        // &var_name will make sure *ptr will evaluate to OBJECT avoiding to read its value at the memory address it is pointing to.
        
        int &var_name = *ptr;

        std::cout << "Unassigned var_name = ";
        std::cout << var_name << std::endl; // --> Will return garbage value as no value is assigned within heap memory.

        var_name = 15;

        std::cout << "var_name = " << var_name << " & *ptr = " << *ptr <<  std::endl;

        free(ptr); // Stack memory allocation would have avoided the use of free(ptr), thus, we have used heap memory allocation.

        std::cout << "var_name after free(ptr) = " << var_name << std::endl;
   
    }
    
    
    /* CASE 2 : Pointer behaviour to evaluate (or dereference) into object while reading its value */
    {
     
        int x = 10;
        int *ptr = &x; // --> Stores memory address of variable 'x'
        int y = *ptr; // --> *ptr will evaluate both into object as well as provide the value stored in it.

        std::cout << y << std::endl;
    }


    return 0;
}



/* Example output:
Unassigned var_name = 18317184
var_name = 15 & *ptr = 15
var_name after free(ptr) = 18317184
10
*/