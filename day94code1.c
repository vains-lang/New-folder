//Write a function that accepts a structure as parameter and prints its members.
#include <stdio.h>

// Enum declaration
enum Branch {
    CSE,
    AIML,
    ECE,
    MECH
};

// Structure declaration
struct Student {
    int roll;
    char name[20];
    enum Branch branch;
};

// Function to print structure members
void display(struct Student s) {
    printf("Roll No: %d\n", s.roll);
    printf("Name: %s\n", s.name);

    printf("Branch: ");
    switch(s.branch) {
        case CSE:
            printf("CSE\n");
            break;
        case AIML:
            printf("AIML\n");
            break;
        case ECE:
            printf("ECE\n");
            break;
        case MECH:
            printf("MECH\n");
            break;
    }
}

int main() {
    struct Student s1 = {101, "Himanshu", AIML};

    display(s1);   // Passing structure to function

    return 0;
}