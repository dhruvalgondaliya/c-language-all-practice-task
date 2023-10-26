#include <stdio.h>

int main()
{
    int d = 1, k;

    printf("Enter a number:");
    scanf("%d", &k);

  for (d=1;d <= k; d++)
  {
    if (d%2==0)
        {
            printf("\n %d ", d);
        }
  }
  

    return 0;
}