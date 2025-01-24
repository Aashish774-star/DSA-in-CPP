#include <stdio.h>

typedef struct { int real, imag; } Complex;

Complex addComplex(Complex c1, Complex c2) {
    return (Complex){c1.real + c2.real, c1.imag + c2.imag};
}

void multiplyComplex(Complex *c1, Complex *c2, Complex *result) {
    result->real = c1->real * c2->real - c1->imag * c2->imag;
    result->imag = c1->real * c2->imag + c1->imag * c2->real;
}

void printComplex(Complex c) {
    printf("%d + %di\n", c.real, c.imag);
}

int main() {
    Complex c1, c2, result;
    int choice;

    printf("Enter complex number 1: ");
    scanf("%d %d", &c1.real, &c1.imag);
    printf("Enter complex number 2: ");
    scanf("%d %d", &c2.real, &c2.imag);

    do {
        printf("\nMENU\n1. Addition\n2. Multiplication\nEnter your choice (0 to exit): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: printComplex(addComplex(c1, c2)); break;
            case 2: multiplyComplex(&c1, &c2, &result); printComplex(result); break;
            case 0: printf("Exiting...\n"); break;
            default: printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 0);

    return 0;
}