// rectangle.c:
// a program that takes in the length and width of a rectangle
// then calculates the area of a rectangle
// checks have also been added to check for negative side lengths
// and then not calculate the area
// 
// week 2 tutorial - 11/6/21
// code by Jenny King (F15-Kora)

#include <stdio.h>

int main(void) {
    
    // initialise width, and prompt for input
    int width;
    printf("Enter the width: ");
    scanf("%d", &width);
    
    int length;
    printf("Enter the length: ");
    scanf("%d", &length);
    
    // validity checks - note, if both here are invalid,
    // then only width will be picked up with the current code
    if (width < 0) {
        printf("Please enter a valid width\n");
    } else if (length < 0) {
        printf("Please enter a valid length\n");
    } else {
        // calculate and print the area
        int area = width * length;
        // "the rectangle has an area [width] * [height] = [area]\n"
        printf("The rectangle has area %d * %d = %d\n", width, length, area);
    }
    
    
    return 0;
}
