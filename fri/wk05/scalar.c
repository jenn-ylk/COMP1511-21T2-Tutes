// Wk 5 Tutorial questions F15A
// code for implementing scalar_multiply
// written by Jenny King

#include <stdio.h>

#define ROWS 3
#define COLS 2

void print_matrix(int rows, int columns, int matrix[rows][columns]);
void scalar_multiply(
    int rows, int columns, int matrix[rows][columns], int scalar
);

int main (void) {
    int matrix[ROWS][COLS] = {{2, 5},{4, 1},{2, 2}};
    // 2 5
    // 4 1
    // 2 2
    printf("Initial matrix\n");
    print_matrix(ROWS, COLS, matrix);
    
    scalar_multiply(ROWS, COLS, matrix, 3);
    
    printf("End matrix\n");
    print_matrix(ROWS, COLS, matrix);
    
    
    return 0;
}

// take a row x column array and multiply every value by some scalar integer
void scalar_multiply(
    int rows, int columns, int matrix[rows][columns], int scalar
) {
    int row = 0;
    while (row < rows) {
        int col = 0;
        while (col < columns) {
            // multiply an individual element
            matrix[row][col] = matrix[row][col] * scalar;
            col++;       
        }
        // move on to the next row
        row++;
    }
}

void print_matrix(int rows, int columns, int matrix[rows][columns]) {

    int row = 0;
    while (row < rows) {
        int col = 0;
        while (col < columns) {
            // print out each column in the row
            printf("%d ", matrix[row][col]);
            col++;       
        }
        // move on to the next row
        printf("\n");
        row++;
    }
    

}


