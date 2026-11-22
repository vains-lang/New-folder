//Find and print the student with the highest marks.
#include <stdio.h>

enum Students
{
    RAHUL,
    AMAN,
    RIYA
};

int main()
{
    int marks[3];

    printf("Enter marks of Rahul, Aman and Riya: ");
    scanf("%d %d %d", &marks[RAHUL], &marks[AMAN], &marks[RIYA]);

    int highest = RAHUL;

    if (marks[AMAN] > marks[highest])
        highest = AMAN;

    if (marks[RIYA] > marks[highest])
        highest = RIYA;

    printf("Student with highest marks: ");

    switch (highest)
    {
        case RAHUL:
            printf("Rahul (%d marks)", marks[RAHUL]);
            break;
        case AMAN:
            printf("Aman (%d marks)", marks[AMAN]);
            break;
        case RIYA:
            printf("Riya (%d marks)", marks[RIYA]);
            break;
    }

    return 0;
}