#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// define the structure of a customer
struct Customer {
    int accountNumber;
    char name[50];
    float balance;
};

// function to print the account number and name of customers with balance < 100
void printLowBalanceCustomers(struct Customer customers[], int numCustomers) {
    printf("Customers with balance less than Rs. 100:\n");
    for (int i = 0; i < numCustomers; i++) {
        if (customers[i].balance < 100) {
            printf("Account No.: %d, Name: %s\n", customers[i].accountNumber, customers[i].name);
        }
    }
}

int main() {
    // declare an array of the Customer structure with 3 elements
    struct Customer customers[3];

    // read in the details of each customer
    for (int i = 0; i < 3; i++) {
        printf("Enter details for Customer %d:\n", i+1);

        printf("Enter account number: ");
        scanf("%d", &customers[i].accountNumber);

        printf("Enter name: ");
        scanf("%s", customers[i].name);

        printf("Enter balance: ");
        scanf("%f", &customers[i].balance);
    }

    // call the function to print the account number and name of customers with balance < 100
    printLowBalanceCustomers(customers, 3);

    return 0;
}
