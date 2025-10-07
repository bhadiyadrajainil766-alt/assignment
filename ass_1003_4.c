#include <stdio.h>

int main() {
    int n, i;
    long long product = 1;   // use long long to avoid overflow for large products

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++) {
        product *= arr[i];
    }

    printf("Product of all elements = %lld\n", product);

    return 0;
}
