// scan in length and width, and calculate the area of a rectangle
// a program that takes in the length and width of a rectangle
// then calculates the area of a rectangle
// checks have also been added to check for negative side lengths
// and then not calculate the area
// 
// week 2 tutorial - 10/6/21
// code by Jenny King (H16B)

#include <stdio.h>

int main(void) {
    
    int width = 0;
    int length = 0;
    
    // ask for width
    printf("Enter width: ");
    scanf("%d", &width);
    
    // ask for length
    printf("Enter length: ");
    scanf("%d", &length);
        
    // check whether the given width is positive
    if (width > 0 && length > 0) {
        // calculate the area    
        int area = length * width;
        // print out the area of rectangles:
        // change this to print in the format: "The area is length * width = area"
        printf("The area is %d * %d = %d\n", length, width, area);
    } else if (width <= 0 && length > 0) {
        printf("Must have a positive width\n");
    } else if (length <= 0 && width > 0) {
        printf("Must have a positive length\n");
    } else {
        printf("Must have a positive width, and length\n");
    }
    
    
    return 0;
}
