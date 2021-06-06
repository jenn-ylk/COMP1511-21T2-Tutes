// face.c, draws a face and prints it to the terminal
// face0:
// ~ ~
// 0 0
//  o
//  -
//
// face1:
// ~ ~
// 0 0
//  o
// \_/
// compile with: dcc -o face1 face.c
// run with:     ./face1
// Jenny King, Thu16b tutorial, 3/6/21

#include <stdio.h>

int main(void) {
    // print statements for each line of the face - these will go out on the termiinal
    // we could put this all on one line, or one printf, but it's more readable on separate lines
    // to print a backslash on the terminal, use the escape sequence "\\"    
    printf("~ ~\n");
    printf("0 0\n");
    printf(" o\n");
    printf("\\_/\n");

    return 0;
}
