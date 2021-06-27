// a program that will sum all numbers entered until ctrl + D is pressed
// Tutorial code F15A week 4
// written by Jenny King

#include <stdio.h>

#define SIZE 1000

int main (void) {

    int numbers[SIZE] = {0};

    int length = 0;
    int input;
    while (scanf("%d", &input) == 1) {
        numbers[length] = input;
        printf("You entered %d\n", input);
        length++;
    }
    
    int i = 0;
    while (i < length) {
        printf("%d ", numbers[i]);
    
        i++;
    }
    printf("\n");
    
    /* 
    // alternative way of making a scanf loop
    int result = scanf("%d", &input); // initialise result
    while (result == 1) {
        printf("You entered %d\n", input);
        result = scanf("%d", &input); // scan again - update result
    }
    */

    /*
    // Testing scanf return values
    //int a;
    double a;
    //int b = 0;

    //int result = scanf("%d", &a);
    int result = scanf("%lf", &a);
    //int result = scanf("%d %d", &a, &b);
    
    printf("The result was %d\n", result);
    //printf("a = %d\n", a);
    printf("a = %lf\n", a);
    //printf("b =  %d\n", b);
    1 
    4 
    53
    hi < stop here
    4
    */

    return 0;
}
