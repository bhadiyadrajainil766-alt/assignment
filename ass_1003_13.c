#include <stdio.h>
int main() 
{
    int n, i;

    // Input value of N
    printf("Enter value of N: ");
    scanf("%d", &n);

    printf("First %d odd numbers are:\n", n);

    for (i = 1; i <= n; i++) 
    {
        printf("%d \n", 2 * i - 1);
    }

    printf("\n");
    return 0;
}
