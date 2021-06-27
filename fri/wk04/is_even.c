// a program that calls a function to check if a number is even
// Tutorial code F15A, week 4
// written by Jenny King

#include <stdio.h>

void say_hi(void);
int is_even(int n);


int main (void) {

    int number = 5;
    
    printf("is_even(%d) returns %d\n", number, is_even(number));
    
    say_hi();
    return 0;
}

// check if a number is even
// return 1 if even, 0 if odd
int is_even(int n) {
    if (n % 2 == 0) {
        return 1;
    } else {    
        return 0;
    }
}

// test function that will print "hello" to the terminal
void say_hi(void) {
    printf("hello!\n");
}
