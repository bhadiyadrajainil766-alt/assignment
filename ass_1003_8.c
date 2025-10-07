#include <stdio.h>

int main() {
    int length, width, perimeter;

    // Input length and width of the rectangle
    printf("Enter length of rectangle: ");
    scanf("%d", &length);

    printf("Enter width of rectangle: ");
    scanf("%d", &width);

    // Calculate perimeter
    perimeter = 2 * (length + width);

    // Output result
    printf("Perimeter of rectangle = %d\n", perimeter);

    return 0;
}
