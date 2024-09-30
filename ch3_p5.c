//Question 

/*
    Write a program to determine whether a character entered by the user is 
lowercase or not
*/

#include <stdio.h>

int main(){
    char input;
    printf("Enter the character to check for \n");
    scanf("%c", &input);

    if (input >= 'a' && input <= 'z'){
        printf("The character enterd is lowercase");
    }
    else{
        printf("The character entered is not lowercase");
    }
}