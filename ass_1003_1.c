#include <stdio.h>

int main() 
{
    char str1[100], str2[100];
    int i = 0, j = 0;

    // Input two strings
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Calculate the length of str1
    while (str1[i] != '\0') 
    {
        i++;
    }

    // Calculate the length of str2
    while (str2[j] != '\0') 
    {
        j++;
    }

    // Compare lengths
    if (i > j) 
    {
        printf("The first string is longer than the second string.\n");
    } 
    else if (i < j) 
    {
        printf("The second string is longer than the first string.\n");
    } 
    else 
    {
        printf("Both strings have the same length.\n");
    }

    return 0;
}
