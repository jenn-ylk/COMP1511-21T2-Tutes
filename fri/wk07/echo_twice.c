// A program tha twill write back on terminal
// the line the user has entered, twice
//
// Week 7 tutorial code
//

#include <stdio.h>

#define SIZE 4096

int main (void) {

    //printf(

    char words[SIZE] = {0};
    
    // fgets returns null when there's no input
    while (fgets(words, SIZE, stdin) != NULL) {
        // print the phrase twice
        printf("%s", words);
        printf("%s", words);
    }

    return 0;
}
