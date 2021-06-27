// a program that initialises an array then sums the numbers inside it
//
// pieces of code in here:
// initialising an array to all zeros
// making all elements equal to 1
// printing an array
// making each element the square of its index
//
// { 1, 0, 0, ...  0 }
//   0  1  2...    9  
// ^- start of the array (the first element is 0 numbers away)
// written by Jenny King for H16B

#include <stdio.h>

#define SIZE 10

// function prototypes so the computer knows the functions exist
void fill_squares(int length, int arr[]);
void print_array(int length, int arr[]);

int main (void) {

    // initialise all numbers in the array to 0
    int numbers[SIZE] = {0};
    
    /*
    // initialise all numbers to 1:
    int i = 0;
    while (i < 10) {
        numbers[i] = 1;
        i++;
    }
    */
    
    printf("Array before:\n");
    print_array(SIZE, numbers);
    
    // initialise all numbers to the index squared:
    
    fill_squares(SIZE, numbers);
    printf("Array after:\n");
    // print all the elements in the array
    print_array(SIZE, numbers);
    
    // printf("%d\n", numbers[SIZE]); // attempting this will cause an error

    return 0;
}

// set each element of the array to the square of it's index
void fill_squares(int length, int arr[]) {
    int i = 0;
    while (i < length) {
        arr[i] = i * i;
        i++;
    }
}


// a function that prints the contents of an array
void print_array(int length, int arr[]) {
    int i = 0;
    while (i < length) {
        printf("%d\n", arr[i]);
        i++;
    }
}


