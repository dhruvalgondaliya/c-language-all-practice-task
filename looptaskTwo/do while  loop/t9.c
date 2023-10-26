#include <stdio.h>
int main() {
    int k, i, multiply = 1;
    printf("Enter your number: ");
    scanf("%d", &k);
    i = 1;

    do {
        multiply *= i;
                printf("\n  %d",i);

        ++i;
    }while (i <= k);

    printf("\n multiply = %d", multiply);
    return 0;
}