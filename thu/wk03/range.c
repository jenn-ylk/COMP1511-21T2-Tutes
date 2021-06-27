// Week 3 tutorial code, H16B, 21T2
// written by Jenny King

// take in a starting and ending number
// print all integers in that range, divisible by 7

#define DIVISOR 7

#include <stdio.h>

int main(void) {

    // take in both the start and end numbers
    int start;
    int end;

    printf("Start number: ");
    scanf("%d", &start);
    printf("End number: ");
    scanf("%d", &end);
    
    int count = start;
    while (count < end) {
        if (count % DIVISOR == 0) {
            printf("%d\n", count);
        }
        count++;
    }
    
    return 0;
}
