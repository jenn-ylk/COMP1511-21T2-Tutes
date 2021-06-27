// Week 3 tutorial code, F15A, 21T2
// written by Jenny King

// take in a starting and ending number
// print all integers in that range

#include <stdio.h>

#define DIV 7

int main(void) {

    // take in both the start and end numbers
    int start;
    int end;

    printf("Start number: ");
    scanf("%d", &start);
    printf("End number: ");
    scanf("%d", &end);
    
    // count the range, only print numbers divisible by our defined number
    int count = start; 
    while (count < end) {
        if (count % DIV == 0) {   
            printf("%d\n", count);
        }
        count++;
    }
    
    return 0;
}
