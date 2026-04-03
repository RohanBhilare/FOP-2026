#include <stdio.h>
#include <string.h>

struct EMPLOYEE {
    char name[50];
    char designation[50];
    char gender[10];
    char dateOfJoining[20];
    float salary;
};

int main() {
    int n, i;
    int maleCount = 0, femaleCount = 0;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    struct EMPLOYEE emp[n];

    for(i = 0; i < n; i++) {
        printf("\nEnter details for Employee %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", emp[i].name);
        printf("Designation: ");
        scanf("%s", emp[i].designation);
        printf("Gender (Male/Female): ");
        scanf("%s", emp[i].gender);
        printf("Date of Joining (dd-mm-yyyy): ");
        scanf("%s", emp[i].dateOfJoining);
        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }

    printf("\n--- RESULTS ---\n");
    
    printf("Total number of employees = %d\n", n);

    for(i = 0; i < n; i++) {
        if(strcmp(emp[i].gender, "Male") == 0 || strcmp(emp[i].gender, "male") == 0) {
            maleCount++;
        } else if(strcmp(emp[i].gender, "Female") == 0 || strcmp(emp[i].gender, "female") == 0) {
            femaleCount++;
        }
    }
    printf("Male employees = %d\n", maleCount);
    printf("Female employees = %d\n", femaleCount);

    printf("Employees with salary more than 10000: ");
    for(i = 0; i < n; i++) {
        if(emp[i].salary > 10000) {
            printf("%s ", emp[i].name);
        }
    }
    printf("\n");

    printf("Employees with designation AsstManager: ");
    for(i = 0; i < n; i++) {
        if(strcmp(emp[i].designation, "AsstManager") == 0) {
            printf("%s ", emp[i].name);
        }
    }
    printf("\n");

    return 0;
}
