#include <stdio.h>

int main() {
    int N, i;

    printf("Enter N: ");
    scanf("%d", &N);

    printf("First %d even numbers are:\n", N);
    for(i = 1; i <= N; i++) {
        printf("%d \n", 2 * i);
    }

    return 0;
}
