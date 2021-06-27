// count up in values by a given increment
// Week 3 H16B
// written by Jenny King

#include <stdio.h>

int main (void) {
    
    /*
    // an inconvenient and slow way of printing numbers
    printf("%d\n", 1); 
    printf("%d\n", 2); 
    printf("%d\n", 3); 
    printf("%d\n", 4); 
    printf("%d\n", 5);
    printf("%d\n", 6); 
    printf("%d\n", 7); 
    printf("%d\n", 8); 
    printf("%d\n", 9); 
    printf("%d\n", 10);
    */
    
    // get the number to count to from the user:
    printf("enter the end number: ");
    int end_num;
    scanf("%d", &end_num);
    
    printf("enter increment: ");
    int increment;
    scanf("%d", &increment);
    
    // intitialise:
    int i = 0;
    // loop condition
    while (i <= end_num) {
        // intructions we repeat
        printf("%d\n", i);
        
        // increment
        i = i + increment;
    }

    return 0;
}
