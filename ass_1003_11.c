#include <stdio.h>
int main() 
{
    int num, original, remainder, result = 0, n = 0;
    int temp;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;
    temp = num;

    // Count number of digits
    while (temp != 0) 
    {
        temp /= 10;
        n++;
    }

    temp = num;

    // Calculate sum of each digit raised to the power n
    while (temp != 0) 
    {
        remainder = temp % 10;

        // Multiply remainder 'n' times instead of using pow()
        int power = 1;
        for (int i = 0; i < n; i++) 
        {
            power *= remainder;
        }

        result += power;
        temp /= 10;
    }

    // Check if Armstrong
    if (result == original)
        printf("%d is an Armstrong number.\n", original);
    else
        printf("%d is not an Armstrong number.\n", original);

    return 0;
}

