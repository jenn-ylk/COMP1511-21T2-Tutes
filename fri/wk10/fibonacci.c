// count up the fibbonacci sequence
// (and why this actually isn't the best to use recursion on)

#include <stdio.h>
#include <stdlib.h>

int fibbonacci(int n);

int main(int argc, char *argv[]) {
    int value = atoi(argv[1]);
    printf("fibbonacci(%d) is %d\n", value, fibbonacci(value));
    
    return 0;
}


int fibbonacci(int n) {
    // base case
    if (n == 0 || n == 1) {
        return n;
    }

    return fibbonacci(n - 1) + fibbonacci(n - 2);
}
