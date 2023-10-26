#include <stdio.h>
int main()
{
    int a[45], i, n, sum = 0, multy = 1,avreg=0;

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
        multy *= a[i]; 
        avreg=sum/a[i];
        printf("\n ", a[i]);
    }
    printf("\n sum of  elements %d", sum);
    printf("\n Multiply of elements %d", multy );
    printf("\n avrege of elements %d", avreg );

    return 0;
}