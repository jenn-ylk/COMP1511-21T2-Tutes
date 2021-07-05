// Wk 5 Tutorial questions F15A
// Code using pointers
// written by Jenny King

#include <stdio.h>

void sum_nums(int a, int b, int *sum, int *sub);
int *max(int *a, int *b);

int main (void) {

    int first = 5;
    int second = 2;
    int sum = 0;
    int sub = 0;
    //int *result;
    
    // call sum_nums, check that the sum has been changed
    sum_nums(first, second, &sum, &sub);
    printf("Sum is now %d\n", sum);
    printf("Sub is now %d\n", sub);
    
    int *max_addr = max(&first, &second);
    printf("The maximum number is %d, at address %p\n", *max_addr, max_addr);
    
    // test that max works (should return the pointer to first)
    

    return 0;
}


void sum_nums(int a, int b, int *sum, int *sub) {
    *sum = a + b;
    
    *sub = a - b;

}


int *max(int *a, int *b) {
    int *max = a;
    if (*a < *b) {
    // a < b compares the value of addresses
    
        max = b;
    }
    
    return max;
    // return NULL;
}


