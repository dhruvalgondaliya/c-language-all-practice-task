#include <stdio.h>

int main()
{

    int d = 1, n;

    printf("enter number:");
    scanf("%d", &n);

    for (d = 1; n >= d; n--)
    {
        printf("%d\n", n);
    }

    return 0;
}