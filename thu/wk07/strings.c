// Introduction to strings
// - how to represent them
// - the null terminator character
// - how to print a string (character by character and with printf)
//
// Week 7 tutorial code
// code by Jenny K (z5258927) 
// for Thursday 16B tutorial

#include <stdio.h>

int secret_function(char *word);

int main (void) {

    // a string is an array of characters
    // "hello" != {'h', 'e', 'l', 'l', 'o'}
    
    char hello[] = {'h', 'e', 'l', 'l', 'o', '\0'};
    
    // looping through and printing a string with putchar
    int i = 0;
    // end condition when we reach the null terminator
    while (hello[i] != '\0') {
    
        // use array indexing
        putchar(hello[i]);
    
        // putchar(*(hello + i)); 
        // ^ this is also usable, but don't do it
        //   it's less clear and so less readable
        //   this is only to show how pointers and arrays are related
        
        //   the array variable is actually storing a pointer to 
        //   the start of the memory of the array
        
        i++;
    }
    printf("\n");
    
    printf("%s has %d lowercase letters\n", hello, secret_function(hello));
    
    // initialising a string
    // 11 + 1 characters (array of 12 characters)
    char greeting[1000] = "hello there";
    
    printf("%s has %d lowercase letters\n", greeting, secret_function(greeting));
    
    // initialising with char *
    char *reply = "how are you?";
    
    printf("%s has %d lowercase letters\n", reply, secret_function(reply));
    

    return 0;
}


// finds the number of lowercase characters in a string
int secret_function(char *word) {
    int i = 0;
    int result = 0;
    while (word[i] != '\0') {
        if (word[i] >= 'a' && word[i] <= 'z') {
            result++;
        }
        i++;
    }
    return result;
}
