// factorial.c - calculated the value of some number factorial
// e.g. 5! = 5 * 4 * 3 * 2 * 1 = 120

// tutorial code wk 10

#include <stdio.h>

int factorial(int n);

int main (void) {

    printf("%d! = %d\n", 0, factorial(0));

    return 0;
}

// return the factorial value of a number
int factorial(int n) {
    

    // iteratively:
    /*
    int result = 1;
    
    int i = 2;
    while (i <= n) {
        result = result * i;
        
        i++;
    }
    */
    
    // recursively:
    // base case:
    if (n == 0 || n == 1) {
        return 1;
    }
    
    // general case
    return n * factorial(n - 1);
    
}


