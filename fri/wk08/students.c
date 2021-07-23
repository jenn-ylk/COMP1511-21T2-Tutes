// F15A Tutorial code, week 8
// code for a basic linked list
// here will just run through what a node looks like
// and how we insert something

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENGTH 128

// 
struct student {
    char name[MAX_LENGTH];
    int zid;
    double mark;
    struct student *next;
};

struct student *create_student(char *name, int zid, double mark, 
                               struct student *next);

int main (void) {
    
    // type       | variable name
    //struct student andrew = {"Andrew Taylor", 5151515, 60.2};
    //strcpy(andrew.name, "Andrew Taylor");
    //andrew.zid = 5151515;
    //andrew.mark = 65;
    
    //printf("%s (%d) : %lf\n", andrew.name, andrew.zid, andrew.mark);
    
    //struct student *tom = create_student("Tom", 5252525, 70.1);
    //printf("%s (%d) : %lf\n", tom->name, tom->zid, tom->mark);
    
    // 
    struct student *head = create_student("Andrew", 5151515, 60.2, NULL);
    //printf("%s, (%d) : %lf, %p\n", head->name, head->zid, head->mark, head->next);
    head = create_student("Tom", 5252525, 70.1, head);
    //printf("%s, (%d) : %lf, %p\n", head->name, head->zid, head->mark, head->next);
    head = create_student("Jenny", 5352355, 64, head);
    head = create_student("Gab", 5245634, 70, head);
    
    //printf("%s, (%d) : %lf, %p\n", head->name, head->zid, head->mark, head->next);
    
    struct student *curr = head;
    while (curr != NULL) {
        printf("%s, (%d) : %lf\n", curr->name, curr->zid, curr->mark);
        curr = curr->next;
    }
    
    // after you've finished with the memory
    //free(tom);
    
    return 0;
}


// make a new student, and return the pointer
struct student *create_student(char *name, int zid, double mark,
                               struct student *next) {
    //struct student new = {name, zid, mark};
    
    struct student *new = malloc(sizeof(struct student));
    // *new.name == new->name
    strcpy(new->name, name);
    new->zid = zid;
    new->mark = mark;
    
    new->next = next;
    
    return new;
}

