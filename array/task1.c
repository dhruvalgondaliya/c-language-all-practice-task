#include <stdio.h>
int main()
{
    int a[45], i, n;

    printf("\n Enter number of  array:");
    scanf("%d", &n);

    printf("\n Enter element  of  array:");

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("\n you have entered element");
    for (i = 0; i < n; i++)
    {
        printf("%d \n", a[i]);
    }

    return 0;
}