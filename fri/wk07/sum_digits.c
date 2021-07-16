// take in characters until EOF (ctrl + d)
// print how many digits there were, and their sum
//
// Week 7 tutorial code
//

#include <stdio.h>

int main (void) {

    int digits = 0;
    int sum = 0;

    int curr_ch = getchar();
    // EOF = -1 
    while (curr_ch != EOF) {
        
        // check if it was a digit
        if (curr_ch >= '0' && curr_ch <= '9') {
            digits++;
            sum = sum + curr_ch - '0'; // remove '0' as an offset
        }
    
        curr_ch = getchar();
    }
    
    printf("Input contained %d digits which summed to %d\n", digits, sum);

    return 0;
}
