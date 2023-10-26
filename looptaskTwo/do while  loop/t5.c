#include <stdio.h>

int main()
{
    int d = 1, k;

    printf("Enter a number:");
    scanf("%d", &k);

   do
    {
        if (d%2==0)
        {
            printf("\n %d ", d);
        }
        d++;
        
    } while (d <= k);

    return 0;
}