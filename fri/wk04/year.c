// a program that checks whether a person is in high school or not
//
// written by F15A (z5555555)
// on 25/06/21

// code has been cleaned up to have better style 
// (variable names, spacing, etc.)

#include <stdio.h>

#define MIN_YEAR 7 
#define MAX_YEAR 12 

int main(void) {

    int current_year;

    // ask for the current year of the person
    printf("What year are you in? ");
    int result = scanf("%d", &current_year);

    // simplify conditions
    // - changed < || == to <=
    // - combined nested if statements with && - other condition is an else
    
    // check whether they are in high school or not
    if (current_year >= MIN_YEAR && current_year <= MAX_YEAR) {
        printf("You are in high school\n");
    } else {
        printf("You are not in high school\n");
    }
    return 0;

}
