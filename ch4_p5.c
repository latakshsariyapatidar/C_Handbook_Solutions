// Question
/*
    Write a program to sum first ten natural numbers using while loop.
*/

#include <stdio.h>

int main(){
    int i = 1;
    int sum = 0;
    while (i <= 10){
        sum+=i;
        i++;
    }

    printf("Sum : %d", sum);
}