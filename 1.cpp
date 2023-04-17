#include <stdio.h>

struct employee {
   int id;
   char name[30];
   char designation[30];
   char department[30];
   float salary;
};

int main() {
   struct employee emp;

   printf("Enter employee ID: ");
   scanf("%d", &emp.id);

   printf("Enter employee name: ");
   scanf("%s", emp.name);

   printf("Enter employee designation: ");
   scanf("%s", emp.designation);

   printf("Enter employee department: ");
   scanf("%s", emp.department);

   printf("Enter employee salary: ");
   scanf("%f", &emp.salary);

   printf("\nEmployee ID: %d", emp.id);
   printf("\nEmployee Name: %s", emp.name);
   printf("\nEmployee Designation: %s", emp.designation);
   printf("\nEmployee Department: %s", emp.department);
   printf("\nEmployee Salary: %.2f", emp.salary);

   return 0;
}
