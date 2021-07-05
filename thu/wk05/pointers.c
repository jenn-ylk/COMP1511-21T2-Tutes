// Wk 5 Tutorial questions H16B
// Code using pointers
// written by Jenny King

#include <stdio.h>

void sum_nums(int a, int b, int *sum);
int *max(int *a, int *b);

int main (void) {

    int first = 5;
    int second = 2;
    int sum = 0;
    //int *result;
    
    
    //printf("sum = %d, &sum = %p\n", sum, &sum);
    // call sum_nums, check that the sum has been changed
    sum_nums(first, second, &sum);
    printf("sum is now %d\n", sum);
    
    /*
    // test that max works (should return the pointer to first)
    int *result1 = max(&first, &second);
    printf("max(&first, &second) returned %p, which points to %d\n", 
           result1, *result1);
           
    int *result2 = max(&second, &first);
    printf("max(&second, &first) returned %p, which points to %d\n", 
           result2, *result2);
    */

    return 0;
}

// sum a and b, put the result in the address sum gives us
void sum_nums(int a, int b, int *sum) {

    printf("The address of a is %p\n", &a);
    *sum = a + b;
}

int *max(int *a, int *b) {
    int *max = a;
    if (*a < *b) {
        max = b;
    }

    return max;
}



