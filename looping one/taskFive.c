#include <stdio.h>

int main()
{
    int d = 1, k;

    printf("Enter a number:");
    scanf("%d", &k);

    while (d <= k)
    {
        if (d%2==0)
        {
            printf("\n %d ", d);
        }
        d++;
        
    }

    return 0;
}