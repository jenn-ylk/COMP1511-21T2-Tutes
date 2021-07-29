// Program to do various linked list exercises
// Written during H16B tutorial by Jenny King

#include <stdio.h>
#include <stdlib.h>

#include "list.h"

// commented out, in order to use this code with main in another file
/*
int main(void) {

    struct node *head = NULL;
    head = add_last(head, 1);
    print_list(head);
    head = add_last(head, 2);
    print_list(head);
    head = add_last(head, 3);
    print_list(head);
    
    head = delete_last(head);
    print_list(head);
    
    struct node *list2 = add_last(NULL, 3);
    list2 = add_last(list2, 4);
    list2 = add_last(list2, 5);
    
    struct node *result = list_append(head, list2);
    
    printf("list_append result:\n");
    print_list(head);
    print_list(list2);
    print_list(result);
    
    free_list(head);
    free_list(list2);
    free_list(result);

    return 0;
}
*/

/** PRESCRIBED FUNCTIONS **/

struct node *add_last(struct node *head, int data) {
    struct node *new = malloc(sizeof(struct node));
    new->data = data;
    new->next = NULL;
    
    struct node *new_head = head;
    
    if (head == NULL) {
        new_head = new;
    } else {
        // insertion at the end of the list
        struct node *curr = head;
        while (curr->next != NULL) {
            // go to the next value
            curr = curr->next;
        }
        curr->next = new;
    }
    
    return new_head;
}

struct node *delete_last(struct node *head) {
    // check whether memory has to be freed
    if (head != NULL) {
        // combining one element and multiple by using the prev pointer
        struct node *prev = NULL;
        struct node *curr = head;
        
        while (curr->next != NULL) {
            prev = curr;
            curr = curr->next;
        }
        
        
        if (prev == NULL) {
            // the list was one element long
            head = NULL;
        } else {
            prev->next = NULL;
        }
        
        // free the last item of the list
        free(curr);
        
        
        // There are MULTIPLE WAYS this can be done!
        // Solution that differentiates between one and more elements long
        /* 
        // check whether it is one element long
        if (head->next == NULL) {
            free(head);
            head = NULL;
        }
        else {
            // save the previous value here, and use as the second last value
            // this could be changed to deal with one element at the same time
            // struct node *prev = NULL
            struct node *curr = head;
            while (curr->next->next != NULL) {
                // go to the next value
                //prev = curr;
                curr = curr->next;
            }
            // free the last item
            free(curr->next);
            // make the second last point to null
            curr->next = NULL;
        }
        */
        
    }
    return head;
}

struct node *copy(struct node *list) {
    struct node *head = NULL;
    struct node *last = NULL;

    struct node *curr = list;
    while (curr != NULL) {
        // allocate memory for a new node
        struct node *new = malloc(sizeof(struct node));
        new->data = curr->data;
        new->next = NULL;
        if (head == NULL) {
            // put new at front of the list
            head = new;
        } else {
            // put at the end of the list
            last->next = new;
        }
        last = new;
        
        curr = curr->next;
    }
    return head;
}

struct node *list_append(struct node *first_list, struct node *second_list) {
    // no memory needs to be allocated
    
    // using copy:
    struct node *first_copy = copy(first_list);
    struct node *second_copy = copy(second_list);
    
    if (first_copy == NULL) {
        // make the return value second_copy
        return second_copy;
    } else {
        // attach the second copy to the end
        struct node *curr = first_copy;
        while (curr->next != NULL) {
            // go to the next value
            curr = curr->next;
        }
        curr->next = second_copy;
        return first_copy;
    }
    
    
    // not using copy:
    /*
    struct node *head = NULL;
    struct node *last = NULL;
    
    // copy all of the first list:
    struct node *curr = first_list;
    while (curr != NULL) {
        // allocate memory for a new node
        struct node *new = malloc(sizeof(struct node));
        new->data = curr->data;
        new->next = NULL;
        if (head == NULL) {
            // put new at front of the list
            head = new;
        } else {
            // put at the end of the list
            last->next = new;
        }
        last = new;
        
        curr = curr->next;
    }
    
    // go through the second list
    curr = second_list;
    while (curr != NULL) {
        // allocate memory for a new node
        struct node *new = malloc(sizeof(struct node));
        new->data = curr->data;
        new->next = NULL;
        if (head == NULL) {
            // put new at front of the list
            head = new;
        } else {
            // put at the end of the list
            last->next = new;
        }
        last = new;
        
        curr = curr->next;
    }
    
    return head;
    */
}

int identical(struct node *first_list, struct node *second_list) {
    return 5841;
}

struct node *set_intersection(struct node *first_list, struct node *second_list) {
    return NULL;
}

// print out the whole linked list
void print_list(struct node *head) {
    struct node *curr = head;
    
    // loop until null, and print out each number
    while (curr != NULL) {
        printf("%d -> ", curr->data);
        curr = curr->next;
    } 
    printf("X\n");
}

// free the whole linked list from memory
void free_list(struct node *head) {
    if (head == NULL) {
        return;
    }
    
    // recursive method, free everything else after the head, then the head
    free_list(head->next);
    free(head);
    
    // you may prefer to free the list iteratively:
    // - make another struct node *, each time, put the node you will free here
    // - move the current node on to the next
    // - free the node using the other variable 
    //   (needed in order to avoid use after free)
}


