// minimum.c
// a program containing a function that 
// returns the minimum value in a linked list

// wk10 tutorial F15A, Jenny King 

#include <stdio.h>
#include <limits.h>
#include "list.h"

int minimum(struct node *head);

int main (void) {
    // build up a linked list
    struct node *head = add_last(NULL, 1);
    head = add_last(head, 2);
    head = add_last(head, 3);
    head = add_last(head, 0);
    
    print_list(head);
    
    printf("minimum is %d\n", minimum(head));
    
    free_list(head);
    return 0;
}

// return the minimum value inside a linked list
int minimum(struct node *head) {

    // base case:
    if (head == NULL) {
        return INT_MAX;
    }
    
    // recursive
    int min = minimum(head->next);
    if (head->data < min) {
        return head->data;
    } else {
        return min;
    }
    
    // iterative
    /*
    int min = INT_MAX;
    struct node *curr = head;
    while (curr != NULL) {
        if (curr->data < min) {
            min = curr->data;
        }
        
        curr = curr->next;
    }
    */

    return min;
}



