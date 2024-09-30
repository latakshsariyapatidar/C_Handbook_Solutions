// Question
/*
    Write a program to print multiplication table of a given number n.
*/

#include <stdio.h>

int main(){
    int n;
    printf("Enter number: \n");
    scanf("%d", &n);

    for (int i =1; i<=10; i++){
        printf("%d x %d = %d \n", n, i, i*n);
    }
}