#include <stdio.h>

int main()
{
    int k = 1, d;

    printf("Enter a number:");
    scanf("%d", &d);

  for (k=1;k <= d;k++)
  {
    if (k%2!=0)
        {
            printf("\n %d ", k);
        }
  }
  
   

    return 0;
}