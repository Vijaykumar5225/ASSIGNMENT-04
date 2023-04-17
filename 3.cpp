#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// define the structure of a student
struct Student {
    char name[50];
    int rollNumber;
    struct tm birthday;
    struct tm admissionDate;
};

int main() {
    // declare a variable of the Student structure
    struct Student student;

    // read in the student's name
    printf("Enter student's name: ");
    fgets(student.name, 50, stdin);

    // read in the student's roll number
    printf("Enter student's roll number: ");
    scanf("%d", &student.rollNumber);

    // read in the student's birthday
    printf("Enter student's birthday (yyyy-mm-dd): ");
    scanf("%d-%d-%d", &student.birthday.tm_year, &student.birthday.tm_mon, &student.birthday.tm_mday);

    // read in the student's admission date
    printf("Enter student's admission date (yyyy-mm-dd): ");
    scanf("%d-%d-%d", &student.admissionDate.tm_year, &student.admissionDate.tm_mon, &student.admissionDate.tm_mday);

    // calculate the age of the student at the time of admission
    time_t birthday_time = mktime(&student.birthday);
    time_t admission_time = mktime(&student.admissionDate);
    double diff = difftime(admission_time, birthday_time);
    double age_years = diff / (60 * 60 * 24 * 365.25);

    // print out the information and age of the student
    printf("\nName: %sRoll Number: %d\nBirthday: %d-%02d-%02d\nAdmission Date: %d-%02d-%02d\nAge at Admission: %0.1f years\n", 
           student.name, student.rollNumber, 
           student.birthday.tm_year, student.birthday.tm_mon, student.birthday.tm_mday, 
           student.admissionDate.tm_year, student.admissionDate.tm_mon, student.admissionDate.tm_mday, 
           age_years);

    return 0;
}
