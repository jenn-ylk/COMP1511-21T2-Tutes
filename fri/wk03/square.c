// Week 3 tutorial code, F15A, 21T2

// draw out a square of a given size

// e.g. size = 5 would print:
// *****
// *****
// *****
// *****
// *****  < row
//     ^--- column

#include <stdio.h>

int main(void) {

    int size;
    scanf("%d", &size);
    
    // this loop will print an upside down triangle
    // *****
    // -****
    // --***
    // ---**
    // ----*
    // just print a "*" in place of the if statements to print a square
    int i = 0;
    // outer loop, each time we reach this point, it is another row
    while (i < size) {
        int j = 0;
        // inner loop, each run through this is one "*" (column) in the row
        while (j < size) {
            if (i + j >= size - 1) {
                printf("*");
            } else {
                printf("-");
            }
            j++;
        }
        printf("\n");
        i++;
    }
    
    return 0;
}
