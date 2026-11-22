//Return a structure containing top student's details from a function.
#include <stdio.h>

enum Branch {
    CSE,
    AIML,
    ECE,
    MECH
};

struct Student {
    int roll;
    char name[20];
    float marks;
    enum Branch branch;
};

// Function returning a structure
struct Student getTopStudent() {
    struct Student s = {101, "Himanshu", 95.5, AIML};
    return s;
}

int main() {
    struct Student top = getTopStudent();

    printf("Top Student Details\n");
    printf("Roll No: %d\n", top.roll);
    printf("Name: %s\n", top.name);
    printf("Marks: %.2f\n", top.marks);

    printf("Branch: ");
    switch(top.branch) {
        case CSE:  printf("CSE");  break;
        case AIML: printf("AIML"); break;
        case ECE:  printf("ECE");  break;
        case MECH: printf("MECH"); break;
    }

    return 0;
}