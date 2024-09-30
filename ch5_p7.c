// Question

/*
Write a program using function to print the following pattern (first n lines)
*
* * *
* * * * *
*/

#include <stdio.h>

int main()
{
    int n;
    printf("Enter n \n");
    scanf("%d", &n);

    printf("\n");
    printf("\n");

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= (2 * i - 1); j++)
        {
            printf("* ");
        }
        printf("\n");
        printf("\n");
    }
}