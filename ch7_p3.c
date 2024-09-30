//Question

/*
    Write a program to create an array of 10 integers and store multiplication table of 5 in it
*/  

#include <stdio.h>

int main(){
    int table_of_5[10];

    for (int i = 1; i <= 10; i++){
        table_of_5[i] = 5 * i;
    }

    for (int i = 1; i <= 10; i++){
        printf("%d\n", table_of_5[i]);
    }
}