#include <stdio.h>

#define SIZE 7

int main(void) {
    int row, column;

    int square[SIZE][SIZE] = {0};
    // initialise the array to 1s
    row = 0;
    while (row < SIZE) {
        column = 0;
        while (column < SIZE) {
            // set the value of the square at current coordinate
            square[row][column] = 1;
            column = column + 1;
        }
        row = row + 1;
    }
    
    // print out the array:
    row = 0;
    while (row < SIZE) {
        column = 0;
        while (column < SIZE) {
            // print the square at current coordinate
            printf("%d", square[row][column]);
            column = column + 1;
        }
        printf("\n");
        row = row + 1;
    }
    
    printf("enter a row and column: ");
    scanf("%d", &row);
    scanf("%d", &column);
    
    // change that coordinate to 0:
    square[row][column] = 0;

    // print out the array (again):
    row = 0;
    while (row < SIZE) {
        column = 0;
        while (column < SIZE) {
            // print the square at current coordinate
            printf("%d", square[row][column]);
            column = column + 1;
        }
        printf("\n");
        row = row + 1;
    }

    return 0;
}
