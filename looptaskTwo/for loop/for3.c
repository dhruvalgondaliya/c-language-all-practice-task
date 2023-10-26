#include <stdio.h>

int main()
{

    int d = 1, n;

    printf("enter number:");
    scanf("%d", &n);

    for (d = 1; d <= n; d++)
    {
        printf("%d\n", d);
    }

    return 0;
}