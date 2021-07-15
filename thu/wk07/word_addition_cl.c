// word addition using command line arguments
// and intro to command line arguments
//
// Week 7 tutorial code
// code by Jenny K (z5258927) 
// for Thursday 16B tutorial

#include <stdio.h>
#include <stdlib.h>

void print_number(int num);

int main (int argc, char *argv[]) {
    // ./program these are command line arguments
    // becomes:
    // {"./program", "these", "are", "command", "line", "arguments"}
    /*
    printf("%d command line arguments\n", argc);
    int i = 0;
    while (i < argc) {
        printf("%s ", argv[i]);
    
        i++;
    }
    printf("\n");
    */
    
    
    // ./word_addition_cl 5 7
    
    // check whether enough numbers were put onto the command line
    if (argc < 3) {
        printf("please enter two numbers in the command line: \n"
               "%s <number> <number>\n", argv[0]);
               
        return 0;
    }
    
    // atoi converts a number in string form to a decimal integer
    // atoi belongs to the standard library (stdlib.h)
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    
    int total = a + b;
    
    // print out the equation
    print_number(a);
    printf(" + ");
    print_number(b);
    printf(" = ");
    print_number(total);
    printf("\n");
        
    return 0;
}


// Function to print the number as a word, or as digits
// used to prevent the repetition of the same print logic
void print_number(int num) {

    // we can use an array of strings here 
    // to make matching the number to its word simpler (just use array indexes)
    char *numbers[] = {
        "zero", "one", "two", "three", "four", "five", 
        "six", "seven", "eight", "nine", "ten"
    };
    
    if (num < 0) {
        printf("negative ");
        num = num * -1;
    }
    
    if (num > 10) {
        printf("%d", num);
    } else {
        printf("%s", numbers[num]);
    }

}

