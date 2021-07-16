// Complete word addition with command line arguments
//
// Week 7 tutorial code 
// Fri15A code (Jennifer King - z5258927)

#include <stdio.h>
// for atoi
#include <stdlib.h>

void print_num(int num);

int main (int argc, char *argv[]) {
    // ./program these are command line arguments
    // argc = 6
    // argv = {"./program", "these", "are", "command", "line", "arguments"}
    
    // print all the command line arguments
    /*
    int i = 0;
    while (i < argc) {
        printf("%s ", argv[i]);
        i++;
    }
    printf("\n");
    */
    
    if (argc != 3) {
        printf("Please enter two numbers on the command line\n");
        return 0;
    }
    
    // convert the strings into numbers
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    int result = a + b;
    
    print_num(a);
    printf(" + ");
    print_num(b);
    printf(" = ");
    print_num(result);
    printf("\n");
    
    // printf("%s + %s = %s\n", numbers[a], numbers[b], numbers[result]);

    return 0;
}

void print_num(int num) {
    // array of the numbers 0 to 10
    char *numbers[] = {"zero", "one", "two", "three", "four", "five", 
                       "six", "seven", "eight", "nine", "ten"};
    
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

