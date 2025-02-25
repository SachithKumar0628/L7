#include <stdio.h>

int main() {
    int num1, num2, largest;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Using ternary operator to find the largest number
    largest = (num1 > num2) ? num1 : num2;

    // Display result
    printf("The largest number is: %d\n", largest);

    return 0;
}

