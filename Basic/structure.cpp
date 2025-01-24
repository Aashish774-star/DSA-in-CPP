#include <stdio.h>

typedef struct {
    char name[50];
    char designation[50];
    float basic_salary;
    float hra_percentage;
    float da_percentage;
} Employee;

void displayEmployeeInfo(Employee employee) {
    float hra = (employee.basic_salary * employee.hra_percentage) / 100;
    float da = (employee.basic_salary * employee.da_percentage) / 100;
    float gross_salary = employee.basic_salary + hra + da;

    printf("Name: %s\n", employee.name);
    printf("Designation: %s\n", employee.designation);
    printf("Basic Salary: %.0f\n", employee.basic_salary);
    printf("HRA %%: %.0f%%\n", employee.hra_percentage);
    printf("DA %%: %.0f%%\n", employee.da_percentage);
    printf("Gross Salary: %.0f\n", gross_salary);
}

int main() {
    Employee employee;

    printf("Enter employee's information:\n");
    printf("Name: ");
    scanf("%s", employee.name);
    printf("Designation: ");
    scanf("%s", employee.designation);
    printf("Basic Salary: ");
    scanf("%f", &employee.basic_salary);
    printf("HRA %%: ");
    scanf("%f", &employee.hra_percentage);
    printf("DA %%: ");
    scanf("%f", &employee.da_percentage);

    printf("\nEmployee's information:\n");
    displayEmployeeInfo(employee);

 
    return 0;
}