#include <stdio.h>

int main() {
    int a, b, c, smallest;

    // Input three numbers
    printf("Enter three numbers: \n");
    scanf("%d %d %d", &a, &b, &c);

    // Find smallest
    if (a <= b && a <= c) {
        smallest = a;
    } 
    else if (b <= a && b <= c) {
        smallest = b;
    } 
    else {
        smallest = c;
    }

    // Output result
    printf("The smallest number is %d\n", smallest);

    return 0;
}
