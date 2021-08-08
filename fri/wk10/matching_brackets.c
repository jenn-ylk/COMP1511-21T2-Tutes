// Author: Dean Wunder (d.wunder@unsw.edu.au)
// Using a stack to match brackets

#include <stdio.h>
#include "stack.h"

int opening_bracket(int bracket);
int closing_bracket(int bracket);
int brackets_match(int opening, int closing);

int main(int argc, char *argv[]) {

    Stack brackets = create_stack();
    
    // flag variable
    int matching = 1;
    int i = 0;
    while (argv[1][i] != '\0' && matching == 1) {
        
        // check if the bracket is openning
        if (opening_bracket(argv[1][i])) {
            stack_push(brackets, argv[1][i]);
        } else if (closing_bracket(argv[1][i])) {
        
            if (stack_size(brackets) != 0) {
                int open_bracket = stack_pop(brackets);
                // check whether the opening and closing brackets match
                if (!brackets_match(open_bracket, argv[1][i])) {
                    matching = 0;
                }
            } else {
                matching = 0;
            }
        }
    
        i++;
    }
    
    // check for balance (all brackets so far matched, none left to match)
    if (matching && stack_size(brackets) == 0) {
        printf("All brackets match!\n");
    } else {
        printf("Invalid bracket sequence!\n");
    }
    
    free_stack(brackets);
    
    return 0;
}

// check if this is opening (return 1 if openning)
int opening_bracket(int bracket) {
    if (bracket == '(' || bracket == '{' || bracket == '[') {
        return 1;
    }
    return 0;
}

int closing_bracket(int bracket) {
    if (bracket == ')' || bracket == '}' || bracket == ']') {
        return 1;
    }
    return 0;
}

int brackets_match(int opening, int closing) {
    if (opening == '(' && closing == ')') {
        return 1;
    }
    if (opening == '{' && closing == '}') {
        return 1;
    }
    if (opening == '[' && closing == ']') {
        return 1;
    }
    return 0;
}
