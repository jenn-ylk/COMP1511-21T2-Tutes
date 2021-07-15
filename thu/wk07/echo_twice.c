// after a line in a string is printed out, then print the same again, twice
//
// Week 7 tutorial code
// code by Jenny K (z5258927) 
// for Thursday 16B tutorial

#include <stdio.h>

#define SIZE 4096

int main (void) {

    char result[SIZE] = {};
    
    // get the line of text from the terminal
    // fgets returns NULL (memory you can't dereference from) on EOF
    while (fgets(result, SIZE, stdin) != NULL) {
        // print the line twice
        printf("%s", result);
        printf("%s", result);
    }
    

    return 0;
}
