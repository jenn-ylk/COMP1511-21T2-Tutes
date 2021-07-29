// An example of how the code we implemented in list.c 
// can be used across other files because of list.h
// using our header file and implementation in another c file
// note: ONLY ONE of our .c files should have a main function

// compile using: dcc -o list list_use.c list.c

// Written during H16B tutorial by Jenny King

#include <stdio.h>
#include "list.h"

int main (void) {
    
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
