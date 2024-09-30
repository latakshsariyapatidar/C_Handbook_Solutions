//Question
/*
    Write a function to convert Celsius temperature into Fahrenheit.
*/

#include <stdio.h>
float convert(float temp){
    float farenhite_temp = (temp * 1.8) + 32;
    return farenhite_temp;
}

int main(){
    float celcius_temp;

    printf("Enter the temperature in Celcius: \n");
    scanf("%f", &celcius_temp);


    float farenhite_temp = convert(celcius_temp);

    printf("The temperature in farenhite is \n %0.2f", farenhite_temp);



}