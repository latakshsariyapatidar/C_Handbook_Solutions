// Question

/*
    Calculate the area of a circle and modify the same program to calculate the 
    volume of a cylinder given its radius and height.
*/


#include <stdio.h>

int main(){
    float radius;

    printf(" \nEnter the radius of the circle: \n");
    scanf("%f", &radius);

    float area;
    area =  3.141 * radius * radius;

    printf("\n The area of the circle will be \n: %f", area);

    printf("\n Now we can also calculate the area of cylinder using the same: \n");

    float height;
    printf("\nEnter the height of the cylinder: \n");
    scanf("%f", &height);

    float area_cylinder;
    area_cylinder =area * height;

    printf("\n The area of cylinder wil be \n %f", area_cylinder);
}