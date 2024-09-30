// Question

/*
    6. Write a program to find greatest of four numbers entered by the user.
*/

#include <stdio.h>

int main(){
    int a, b, c, d;

    printf("Enter the 4 numbers\n");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    int max_1;
    if (a > b){
        max_1 = a;
    }
    else{
        max_1 = b;
    }

    int max_2;
    if (c > d){
        max_2 = c;
    }
    else{
        max_2 = d;
    }

    int max;
    if (max_1 > max_2){
        max = max_1;
    }
    else{
        max = max_2;
    }

    printf("The maximum of the all numbers id %d", max);
}