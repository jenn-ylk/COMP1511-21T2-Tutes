// A program that when run, prints out this face:
// ~ ~
// 0 0
//  o
// \_/
// compile with: dcc -o face1 face.c
// run with:     ./face1
// Jenny King, Fri15Kora tutorial, 4/6/21

#include <stdio.h>

int main (void) {
    // print statements for each line of the face - these will go out on the termiinal
    // we could put this all on one line, but it's more readable on separate lines
    // to print a backslash on the terminal, use the escape sequence "\\"
    printf("~ ~\n");
    printf("0 0\n");
    printf(" o\n");
    printf("\\_/\n");
    
    return 0;
}
