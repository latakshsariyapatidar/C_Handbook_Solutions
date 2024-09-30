// Question

/*
    Write a program to convert Celsius (Centigrade degrees temperature to 
    Fahrenheit)
*/

#include <stdio.h>

int main(){
    float celcius_temp;

    printf("Enter the temperature in Celcius: \n");
    scanf("%f", &celcius_temp);

    printf("Converting to Farnhite Temperature: \n");

    float farenhite_temp = (celcius_temp * 1.8) + 32;

    printf("The temperature in Farenhite will be: \n %f", farenhite_temp );
}