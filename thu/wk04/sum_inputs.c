// a program that will sum all numbers entered until ctrl + D is pressed
// Tutorial H16B, week 4
// written by Jenny King

#include <stdio.h>

int main (void) {
    /*
    int a;
    int b;
    int result = scanf("%d %d", &a, &b);
    */
    
    int sum = 0;
    
    // a loop that will continue scanning until ctrl + D is pressed
    int input;
    int scan_result = scanf("%d", &input);
    while (scan_result == 1) {
        sum = sum + input;
        
        printf("%d was entered\n", input);
        // take in another input
        scan_result = scanf("%d", &input);
    }
    
    printf("The sum was: %d\n", sum);
    
    return 0;
}
