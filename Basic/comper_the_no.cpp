#include <stdio.h>

// Function to compare two numbers
void compare_numbers(int* num1, int* num2) {
    if (*num1 > *num2) {
        printf("%d is greater than %d\n", *num1, *num2);
    } else if (*num1 < *num2) {
        printf("%d is smaller than %d\n", *num1, *num2);
    } else {
        printf("Both numbers are same\n");
    }
}

int main() {
    int num1, num2;

    // Read two numbers from user
    printf("Enter first numbers: ");
    scanf("%d %d", &num1, &num2);

    // Call the function to compare numbers
    compare_numbers(&num1, &num2);

    return 0;
}