// H16B Tutorial code, week 8
// code for a basic linked list
// here will just run through what a node looks like
// and how we insert something

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 128


struct student *create_student(char *name, int zid, double mark, struct student *head);

struct class {
    char class_name[MAX_LEN];
    int num_students;
    struct student* students;
}


// defining a struct for students
struct student {
    // put all of our fields here
    char name[MAX_LEN];
    int zid;
    double mark;
    struct student *next;
};

int main (void) {

    /*
    // type       | var name
    struct student andrew = {"Andrew Taylor", 5151515, 60.2};
    // change the mark, using the .
    andrew.mark = 65;
    
    printf("%s, (%d) : %lf\n", andrew.name, andrew.zid, andrew.mark);
    */
    
    // start the linked list
    struct student *head = create_student("Andrew Taylor", 5151515, 60.2, NULL);
    head = create_student("Tom Kunc", 5252525, 75, head);
    head = create_student("Jenny King", 5256431, 56, head);
    head = create_student("Anuska Menon", 5409823, 76.5, head);
    
    struct student *curr = head;
    // keep on looping until the end
    while (curr != NULL) {
        printf("%s, (%d) : %lf\n", curr->name, curr->zid, curr->mark);
        
        // change/iteration step
        // move on to the next student
        curr = curr->next;
    }
    
    // printf("%s, (%d) : %lf\n", tom->name, tom->zid, tom->mark);
    
    // head->next = tom;
    
    // prints the same thing (don't do this in case of 1 element linked lists)
    // printf("%s, (%d) : %lf\n", head->next->name, head->next->zid, head->next->mark);
    // *(*(head).next).name
    
    // free the allocated memory, get rid of memory leaks
    // free(tom);
    
    return 0;
}

struct student *create_student(char *name, int zid, double mark, struct student *head) {
    //struct student *new;
    // *new.name is the same as new->name
    // malloc allocates memory in bytes
    struct student *new = malloc(sizeof(struct student));
    
    strcpy(new->name, name);
    new->zid = zid;
    new->mark = mark;
    new->next = head;
    
    return new;
}


