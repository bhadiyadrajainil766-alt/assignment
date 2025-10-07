#include <stdio.h>

int main() {
    int num, i;
    long long fact = 1;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check for negative number
    if (num < 0) {
        printf("Factorial of negative numbers is not defined.\n");
    } else {
        for (i = 1; i <= num; i++) {
            fact = fact * i;
        }
        printf("Factorial of %d = %lld\n", num, fact);
    }

    return 0;
}
