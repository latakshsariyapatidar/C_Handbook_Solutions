// Question

/*
Write a program to determine whether a student has passed or failed. To pass, a
student requires a total of 40% and at least 33% in each subject. Assume there
are three subjects and take the marks as input from the user.
*/

#include <stdio.h>

int main()
{
    int complete_marks = 50;
    int marks_scored1, marks_scored2, marks_scored3;
    printf("Enter the number of marks scord out of 50 in subject 1 \n");
    scanf("%d", &marks_scored1);

    printf("Enter the number of marks scord out of 50 in subject 2 \n");
    scanf("%d", &marks_scored2);

    printf("Enter the number of marks scord out of 50 in subject 3 \n");
    scanf("%d", &marks_scored3);

    float total_percent = (marks_scored1 + marks_scored2 + marks_scored3) % 150;
    float percent1 = marks_scored1 / 50;
    float percent2 = marks_scored2 / 50;
    float percent3 = marks_scored3 / 50;
    if (total_percent > 0.40 || percent1 > 0.33 || percent2 > 0.33|| percent3 > 0.33)
    {
        printf("You passed the exmination");
    }
    else
    {
        printf("You failed the exmination");

    }
}