// counts the number of digits (0-9) in the input, and the sum of these
// after EOF (ctrl + D hit) prints out how many digits, and their sum
//
// Week 7 tutorial code
// code by Jenny K (z5258927) 
// for Thursday 16B tutorial

#include <stdio.h>

int main (void) {
    
    int digits = 0;
    int sum = 0;
    
    // getchar returns EOF (-1)
    int current_char = getchar();
    while (current_char != EOF) {
        // print the character
        // putchar(current_char);
        
        if (current_char >= '0' && current_char <= '9') {
            sum = sum + current_char - '0';
            digits++;
        }
        
        // get the next character
        current_char = getchar();
    }
    
    printf("Input contained %d digits which summed to %d\n", digits, sum);

    return 0;
}
