#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 100

struct student {
    int roll_no;
    char stud_name[50];
    int mark1, mark2, mark3;
    int total_marks;
    float avg_marks;
};

int num_students = 0;
struct student students[MAX_STUDENTS];

void add_student() {
    if (num_students == MAX_STUDENTS) {
        printf("Error: Maximum number of students reached.\n");
        return;
    }

    printf("Enter student details:\n");
    printf("Roll no: ");
    scanf("%d", &students[num_students].roll_no);

    printf("Name: ");
    scanf("%s", students[num_students].stud_name);

    printf("Marks in three subjects:\n");
    printf("Mark 1: ");
    scanf("%d", &students[num_students].mark1);

    printf("Mark 2: ");
    scanf("%d", &students[num_students].mark2);

    printf("Mark 3: ");
    scanf("%d", &students[num_students].mark3);

    students[num_students].total_marks = students[num_students].mark1 + students[num_students].mark2 + students[num_students].mark3;
    students[num_students].avg_marks = (float) students[num_students].total_marks / 3.0;

    num_students++;
    printf("Student added to record.\n");
}

void sort_students() {
    for (int i = 0; i < num_students - 1; i++) {
        for (int j = i + 1; j < num_students; j++) {
            if (students[i].total_marks < students[j].total_marks) {
                struct student temp = students[i];
                students[i] = students[j];
                students[j] = temp;
            }
        }
    }
}

void display_students() {
    printf("Roll No\tStudent Name\tMark 1\tMark 2\tMark 3\tTotal Marks\tAverage Marks\n");

    for (int i = 0; i < num_students; i++) {
        printf("%d\t%s\t\t%d\t%d\t%d\t%d\t\t%.2f\n",
               students[i].roll_no,
               students[i].stud_name,
               students[i].mark1,
               students[i].mark2,
               students[i].mark3,
               students[i].total_marks,
               students[i].avg_marks);
    }
}

int main() {
    int choice;

    do {
        printf("\nStudent Record Management System\n");
        printf("1. Add student record\n");
        printf("2. Display student record\n");
        printf("3. Sort student record by marks\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                add_student();
                break;
            case 2:
                display_students();
                break;
            case 3:
                sort_students();
                printf("Student records sorted by marks in descending order.\n");
                break;
            case 4:
                printf("Exiting student record management system.\n");
                break;
            default:
                printf("Invalid choice.\n");
        }
    } while (choice != 4);

    return 0;
}
