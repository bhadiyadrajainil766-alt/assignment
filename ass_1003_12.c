#include <stdio.h>

// Function to check if number is prime
int isPrime(int n) 
{
    if (n < 2) return 0;
    for (int i = 2; i <= n / 2; i++) 
    {
        if (n % i == 0) return 0;
    }
    return 1;
}

// Function to check if number is palindrome
int isPalindrome(int n) 
{
    int original = n, reversed = 0, digit;
    while (n > 0) 
    {
        digit = n % 10;
        reversed = reversed * 10 + digit;
        n /= 10;
    }
    return (original == reversed);
}

int main() 
{
    int num;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check prime palindrome
    if (isPrime(num) && isPalindrome(num))
        printf("%d is a Prime Palindrome number.\n", num);
    else
        printf("%d is NOT a Prime Palindrome number.\n", num);

    return 0;
}
