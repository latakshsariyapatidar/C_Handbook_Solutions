// Question

/*
    Write a C program to calculate area of a rectangle:
    b. Using inputs supplied by the use
*/

#include <stdio.h>

int main(){
    int length;
    int width;

    printf("\n Enter the length of the rectange: \n");
scanf("%d", &length);

    printf("\n Enter the width of the rectangle: \n");
    scanf("%d", &width);


    int area = length * width;

    printf("The area of a rectange with length: %d and width: %d is %d", length, width, area);
}