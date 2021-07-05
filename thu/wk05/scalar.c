// Wk 5 Tutorial questions H16B
// code for implementing scalar_multiply
// written by Jenny King

#include <stdio.h>

#define ROWS 3
#define COLS 2

void print_matrix(int rows, int columns, int matrix[rows][columns]);
void scalar_multiply(
    int rows, int columns, int matrix[rows][columns], int scalar
);

// 1 2
// 2 2
// 3 4

// mutiply by 2

// 2 4
// 4 4 
// 6 8

int main (void) {
    
    
    int matrix[ROWS][COLS] = {{1, 2}, {2, 2}, {3, 4}};
    
    int scalar = 1;
    scanf("%d", &scalar);
    
    print_matrix(ROWS, COLS, matrix);
    printf("\n");
    scalar_multiply(ROWS, COLS, matrix, scalar);
    printf("Result:\n");
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
            matrix[row][col] = matrix[row][col] * scalar;
            
            col++;
        }
        row++;
    }

}

// print out the matrix
void print_matrix(int rows, int columns, int matrix[rows][columns]) {
    int row = 0;
    while (row < rows) {
        int col = 0;
        while (col < columns) {
            printf("%d ", matrix[row][col]);
            col++;
        }
        printf("\n");
        row++;
    }

}

