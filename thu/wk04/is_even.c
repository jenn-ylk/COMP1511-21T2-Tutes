// a program that calls a function to check if a number is even
//
// written by Jenny King for H16B

#include <stdio.h>

int is_even(int n);

int main (void) {

    int my_num = 4;
    int result = is_even(my_num);
    
    printf("is_even(%d) returns %d\n", my_num, result);

    return 0;
}


int is_even(int n) {
    int result;
    if (n % 2 == 0) {
        result = 1;
    } else {
        result = 0;
    }
    
    n = n + 1;
    return result;
}

/*
void say_hi(void) {
    printf("Hi\n");
}
*/
