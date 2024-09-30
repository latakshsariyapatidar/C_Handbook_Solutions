//Question
/*
    Write a program using function to find average of three numbers.  
*/

#include <stdio.h>

int average (int a, int b,int c){
    int avg = (a +b+c) / 3;
    return avg; 
}

int main(){
    int a, b, c;
    printf("Enter three numbers\n");
    scanf("%d %d %d", &a, &b, &c);

    int avg = average(a , b, c);
    printf("The average is %d", avg);
}