#include <stdio.h>

int main() {
    int a, b; 

    // Input from user
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Swapping using a temporary variable
    a = a + b;
    b = a - b;
    a = a - b;

    // Display result
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}

