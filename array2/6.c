#include <stdio.h>
int main()
{
    int a[10][10], m, n, i, j;

    printf("\n Enter row:");
    scanf("%d",&m);

    printf("\n Enter column:");
    scanf("%d",&n);

    printf("\n Enter elements:");

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("\nmatrix is:\n");

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ",a[i][j]);
        }
       printf("\n");
    }
 
    for (i = 0; i < m; i++)
    {
        int sum = 0;
        for (j = 0; j < n; j++)
        {
            
            sum += a[j][i];
        }
        printf("\n column sum is %d", sum);
    }


    return 0;
}
