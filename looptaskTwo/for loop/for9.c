#include <stdio.h>
int main()
{
    int k, i, multiply = 1;
    printf("Enter your number: ");
    scanf("%d", &k);
    i = 1;

    for (k, i, multiply = 1; i <= k; ++i)
    {
        multiply *= i;
        printf("\n  %d", i);
    }

    printf("\n multiply = %d", multiply);
    return 0;
}