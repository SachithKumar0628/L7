#include <stdio.h>

int main() {
    int num1, num2;

    // Asking for user input
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Compare the numbers and print the largest one
    if (num1 > num2) {
        printf("The largest number is %d\n", num1);
    } else if (num2 > num1) {
        printf("The largest number is %d\n", num2);
    } else {
        printf("Both numbers are equal.\n");
    }

    return 0;
}
