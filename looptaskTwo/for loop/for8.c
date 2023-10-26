#include <stdio.h>
int main()
{
    int n, d, sum = 0;
    printf("Enter your number: ");
    scanf("%d", &n);
    d = 1;

    for (n, d, sum = 0; d <= n; ++d)
    {
        sum += d;
        printf("\n  %d", d);
    }

    printf("\nSum = %d", sum);

    return 0;
}