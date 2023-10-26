#include <stdio.h>

int main()
{
    int k = 1, d;

    printf("Enter a number:");
    scanf("%d", &d);

    while (k <= d)
    {
        if (k%2!=0)
        {
            printf("\n %d ", k);
        }
        k++;
        
    }

    return 0;
}