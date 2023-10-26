#include <stdio.h>

int main()
{

    int d = 1, n;

    printf("enter number:");
    scanf("%d", &n);

    while (d <= n)
    {
        printf("%d\n", d);
        d++;
    }

    return 0;
}