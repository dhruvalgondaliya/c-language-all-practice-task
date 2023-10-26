#include <stdio.h>

int main()
{

    int d = 1, n;

    printf("enter number:");
    scanf("%d", &n);

    while (n >= d)
    {
        printf("%d\n", n);
        n--;
    }

    return 0;
}