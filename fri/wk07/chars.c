// Introduction to characters
// - how to represent a character
// - getting characters from the user
// - putting characters onto the terminal
//
// Week 7 tutorial code
// code by Jenny K (z5258927) 
// Fri15A tutorial

#include <stdio.h>

int main (void) {

    // initialise 'a'
    //   - when initialising a character, write it as a character,
    //     not the numerical value
    char letter = 'a';
    char letter_num = 97;
    
    // print the character on the terminal
    putchar(letter + 5);
    putchar('\n');
    putchar(letter_num);
    putchar('\n');
    
    int ch = getchar();
    putchar(ch);

    return 0;
}
