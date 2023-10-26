#include <stdio.h>
int main() {
    int k, i, multiply = 1;
    printf("Enter your number: ");
    scanf("%d", &k);
    i = 1;

    while (i <= k) {
        multiply *= i;
                printf("\n  %d",i);

        ++i;
    }

    printf("\n multiply = %d", multiply);
    return 0;
}