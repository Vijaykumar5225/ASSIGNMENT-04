#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// define the structure of an employee
struct Employee {
    int empNumber;
    char name[50];
    float salary;
};

int main() {
    int n;
    // read in the number of employees
    printf("Enter the number of employees: ");
    scanf("%d", &n);

    // declare an array of the Employee structure with n elements
    struct Employee employees[n];

    // read in the details of each employee
    for (int i = 0; i < n; i++) {
        printf("Enter details for Employee %d:\n", i+1);

        printf("Enter employee number: ");
        scanf("%d", &employees[i].empNumber);

        printf("Enter name: ");
        scanf("%s", employees[i].name);

        printf("Enter salary: ");
        scanf("%f", &employees[i].salary);
    }

    // find the employee with the highest salary
    int highestSalaryIndex = 0;
    for (int i = 1; i < n; i++) {
        if (employees[i].salary > employees[highestSalaryIndex].salary) {
            highestSalaryIndex = i;
        }
    }

    // print out the details of the employee with the highest salary
    printf("\nEmployee with highest salary:\n");
    printf("Employee No.: %d, Name: %s, Salary: Rs. %0.2f\n", 
           employees[highestSalaryIndex].empNumber, 
           employees[highestSalaryIndex].name, 
           employees[highestSalaryIndex].salary);

    return 0;
}
