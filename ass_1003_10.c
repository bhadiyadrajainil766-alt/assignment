#include <stdio.h>

// Recursive function to calculate factorial
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;   // Base case
    } else {
        return n * factorial(n - 1); // Recursive step
    }
}

int main() {
    int num;
    
    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);
    
    // Check for negative input
    if (num < 0) {
        printf("Factorial of negative numbers is not defined.\n");
    } else {
        printf("Factorial of %d = %d\n", num, factorial(num));
    }
    
    return 0;
}
