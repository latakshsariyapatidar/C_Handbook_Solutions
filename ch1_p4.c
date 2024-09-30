//Question

/*
    Write a program to calculate simple interest for a set of values representing 
    principal, number of years and rate of interest
*/

#include <stdio.h>

int main(){
    float principal, number_of_years, rate_of_interest;

    printf("\n Enter the principal amount \n ");
    scanf("%f", &principal);
    
    printf("\n Enter the rate of interest \n ");
    scanf("%f", &rate_of_interest);

    printf("\n Enter the number of years \n ");
    scanf("%f", &number_of_years);

    float simple_interst = (principal * rate_of_interest * number_of_years) / 100;

    printf("The simple interst according to your inputs will be %f", simple_interst);
}