#include <stdio.h>

int main()
{

    int d = 1, n;

    printf("enter number:");
    scanf("%d", &n);

   do
    {
        printf("%d\n", d);
        d++;
    }
     while (d <= n);

    return 0;
}