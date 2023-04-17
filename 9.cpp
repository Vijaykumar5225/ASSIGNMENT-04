#include <stdio.h>
#include <string.h>

union Student {
    char name[50];
    float gpa;
};

int main() {
    union Student student;

    printf("Enter the student's name: ");
    scanf("%s", student.name);

    printf("Enter the student's GPA: ");
    scanf("%f", &student.gpa);

    printf("Student's name: %s\n", student.name);
    printf("Student's GPA: %f\n", student.gpa);

    return 0;
}
