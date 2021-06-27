// Code that identifies whether someone is highschool aged
//
// code by H16B (z5555555) on 24/06/21

// fixing up the style of this code (variable naming, spaces, clearer logic

#include <stdio.h>

// constants for year groups
#define MIN_YEAR 7
#define MAX_YEAR 12

int main(void) {

    // every statement on a separate line
    int year;
    
    // have the user enter their school year
    printf("What year are you in? ");
    scanf("%d", &year);
    
    // check whether the student is in hight school
    if (year >= MIN_YEAR) {
        if (year <= MAX_YEAR) {
            printf("You are in high school\n");
        }
    }
    if (year < MIN_YEAR || year > MAX_YEAR) {
        printf("You are not in high school\n");
    }
    return 0;
}
