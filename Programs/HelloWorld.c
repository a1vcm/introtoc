#include <stdio.h> // A standard c header file, most programs use this

// This main part is the only part that automatically executes
// Takes int return type, has name main, and takes in void for its parameters
int main (void){
    // Outputs/prints out the string "Hello World"
    // "%s" followed by the sentence says that its a string
    // "\n" after the sentence tells compliter to add a new line 
    printf("%s", "Hello World\n");
    return 0; // Proper syntax for programs, ensures that codes ends
}
