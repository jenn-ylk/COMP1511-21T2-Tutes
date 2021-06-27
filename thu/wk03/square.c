// Week 3 tutorial code, H16B, 21T2
// written by Jenny King

// draw out a square of a given size

// e.g. size = 5 would print:
// ***** 0
// ***** 1
// ***** 2 
// ***** 3
// ***** 4 < row
//     ^--- column

#include <stdio.h>

int main(void) {

    int size;
    scanf("%d", &size);
    
    // prints out a diagonal line
    // in order to just print out the square, 
    // remove the if statements, and just print asterisks
    /*
    int row = 0;
    while (row < size) {
        int column = 0;
        while (column < size) {
            if (row == column) {
                printf("*");
            } else {
                printf("-");
            }
            column++;
        }
        printf("\n");
        row++;
    }
    */
    
    // prints out a triangle:
    // *****
    // -****
    // --***
    // ---**
    // ----*
    int row = 0;
    while (row < size) {
        int column = 0;
        while (column < size) {
            if (row + column >= size - 1) {
                printf("*");
            } else {
                printf("-");
            }
            column++;
        }
        printf("\n");
        row++;
    }
    
    return 0;
}
