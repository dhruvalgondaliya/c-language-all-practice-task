#include <stdio.h>

int main()
{

    int d = 1, n;

    printf("enter number:");
    scanf("%d", &n);

   do
    {
        printf("%d\n", n);
        n--;
    } while (n >= d);

    return 0;
}