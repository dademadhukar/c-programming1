#include <stdio.h>

int main() {
    double num1, num2, sum;

    // Input two numbers from the user
    printf("Enter the first number: ");
    scanf("%lf", &num1);

    printf("Enter the second number: ");
    scanf("%lf", &num2);

    // Calculate the algebraic sum
    sum = num1 + num2;

    // Display the result
    printf("The algebraic sum of %.2lf and %.2lf is %.2lf\n");
    return 0;
}

