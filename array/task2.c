#include <stdio.h>
int main()
{
    int a[45], i, n, sum = 0, m = 1;

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
        sum += a[i];
        m *= a[i];
        printf("\n ", a[i]);
    }
    printf("\n sum of  elements %d", sum);
    printf("\n Multiply of elements %d", m);

    return 0;
}