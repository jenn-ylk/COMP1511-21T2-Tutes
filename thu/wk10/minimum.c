// minimum.c
// a program containing a function that 
// returns the minimum value in a linked list

// wk10 tutorial H16B, Jenny King 

#include <stdio.h>
#include "list.h"
#include <limits.h>

int minimum(struct node *head);

int main (void) {
    // build up a linked list
    struct node *head = add_last(NULL, 1);
    head = add_last(head, 9);
    
    print_list(NULL);
    printf("The minimum is %d\n", minimum(NULL));
    
    free_list(head);
    return 0;
}

// return the minimum value inside a linked list
int minimum(struct node *head) {
    
    // iterative:
    /*
    struct node *curr = head;
    while (curr != NULL) {
        if (curr -> data < min) {
            min = curr->data;
        }
        curr = curr->next;
    }
    */
    
    // recursive:
    // base case:
    if (head == NULL) {
        return INT_MAX;
    }
    
    int min = minimum(head->next);
    if (head->data < min) {
    // compare head data with minimum of the rest of the list
        min = head->data;
    }
    return min;
}


