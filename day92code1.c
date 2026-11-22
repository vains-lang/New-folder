//Store details of 5 students in an array of structures and print all.
#include <stdio.h>

struct Student {
    int roll_no;
    char name[50];
    float marks;
};

int main() {
    struct Student s[5];
    int i;

    // Input details
    for (i = 0; i < 5; i++) {
        printf("Enter details of student %d\n", i + 1);

        printf("Roll No: ");
        scanf("%d", &s[i].roll_no);

        printf("Name: ");
        scanf(" %49[^\n]", s[i].name);

        printf("Marks: ");
        scanf("%f", &s[i].marks);

        printf("\n");
    }

    // Print details
    printf("\n%-10s %-20s %-10s\n", "Roll No", "Name", "Marks");
    printf("----------------------------------------\n");
    for (i = 0; i < 5; i++) {
        printf("%-10d %-20s %-10.2f\n", s[i].roll_no, s[i].name, s[i].marks);
    }

    return 0;
}