// Introduction to strings
// - how to represent them
// - the null terminator character
// - how to print a string (character by character and with printf)
//
// Week 7 tutorial code
// code by Jenny K (z5258927) 
// Fri15A tutorial

#include <stdio.h>

int secret_function(char *word);

int main (void) {

    // each character individually
    char hello[1000] = {'h', 'e', 'l', 'l', 'o', '\0'};
    
    // print the string
    printf("secret_function(\"%s\") returns %d\n", 
           hello, secret_function(hello));
    /*
    // printing the string character by character
    int i = 0;
    while (hello[i] != '\0') {
        putchar(hello[i]);
        i++;
    }
    putchar('\n');
    */
    
    // whole string
    // char greeting[1000] = "nice to meet you!";
    
    // using a char * (pointer to the first character)
    char *words = "how are you?";
    
    printf("secret_function(\"%s\") returns %d\n", 
           words, secret_function(words));
    
    
    int i = 0;
    // loop through the string until the end 
    //   - marked by the null terminator ('\0')
    while (words[i] != '\0') {
        // when looping through an array, pointer arithmetic can be used,
        // don't do this, use array indexes
        // it's clearer style wise, and more obvious what's going on
        // putchar(*(words + i)); // add to the address, then dereference
        
        // use array indexing!
        putchar(words[i]);
        i++;
    }
    putchar('\n');

    return 0;
}

// counts the number of lower case letters in a string
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
