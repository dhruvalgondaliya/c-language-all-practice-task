#include <stdio.h>
int main()
{

    int a[60][60], n, m, i,j;

    printf("\nEnter row value: ");
    scanf("%d", &m);

    printf("\nEnter column value: ");
    scanf("%d", &n);

    printf("\nEnter your elements:");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf(" Matrix is \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", a[i][j]);
          
        }  
        printf("\n");
    }

   
    for ( i = 0; i < m; i++)
    {
        int sum=0;
        for ( j = 0; j < n; j++)
        {
            sum += a[i][j];
            
        }
       printf("Sum of row  %d\n",sum);
    }

    return 0;
}