// A program that tests adding three numbers
// Written very badly by Tom Kunc 2020-10-25 (z5205060)
// t.kunc@unsw.edu.au (please don't email me about this bad code)

// tests written by Fri15A tute Jenny King (z5258927)

#include <stdio.h>

#define MEETS_SPEC 1
#define DOES_NOT_MEET_SPEC 0

int add(int a, int b, int c);

int test_add(void) {
    // test cases (we use multiple to make sure that many cases are covered)
    if (add(1, 2, 3) != 6) {
        // one test case isn't enough
        return DOES_NOT_MEET_SPEC;
    }
    if (add(0, 1, 1) != 2) {
        return DOES_NOT_MEET_SPEC;
    }
    if (add(1, 1, 1) != 3) {
        return DOES_NOT_MEET_SPEC;
    }
    if (add(1, 105, 1) != 107) {
        return DOES_NOT_MEET_SPEC;
    }
    if (add(1, -10, 1) != -8) {
        return DOES_NOT_MEET_SPEC;
    }
    return MEETS_SPEC;
}


// This function returns the sum of a, b and c.
int add(int a, int b, int c) {
    return a * b * c;
}

int main(void) {
    printf("Test whether `add` does the right thing: ");
    if (test_add() == MEETS_SPEC) {
        printf("MEETS SPEC\n");
    } else {
        printf("DOES NOT MEET SPEC\n");
    }
    return 0;
}
