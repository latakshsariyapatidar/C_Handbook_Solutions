//Question

/*
    3. Write a program to check whether a number is divisible by 97 or not.
*/

#include <stdio.h>

int main(){
    int number;
    printf("Enter the number to check for:\n");
    scanf("%d", &number);


    int remainder = number % 97;

    if (remainder == 0){
        printf("The number is divisible by 97");
    }
    else{
        printf("The number is not divisble by 97");
    }
}