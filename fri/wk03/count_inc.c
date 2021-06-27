// count up in values by a given increment
// F15A week 3 21T2
// written by Jenny King

#include <stdio.h>

int main (void) {
    int end;
    scanf("%d", &end);
    
    // initialise counter
    int i = 1;
    while (i <= end) {
        // stuff to do - print numbers
        printf("%d\n", i);
        // increase counter
        i = i + increment; // (i.e. i = i + 1)
    }

    
    /*
    // slow and difficult way to count up the numbers
    printf("1\n");
    printf("2\n");
    printf("3\n");
    printf("4\n");
    printf("5\n");
    */
    
    
    return 0;
}
