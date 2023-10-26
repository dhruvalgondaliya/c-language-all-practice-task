#include <stdio.h>

int main()
{
    int k = 1, d;

    printf("Enter a number:");
    scanf("%d", &d);

  do
    {
        if (k%2!=0)
        {
            printf("\n %d ", k);
        }
        k++;
        
    }  while (k <= d);

    return 0;
}