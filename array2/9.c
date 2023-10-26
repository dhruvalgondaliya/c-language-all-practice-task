#include <stdio.h>
int main()
{

    int a[50][50], n, m, i, j, sum = 0, d = 0, new_sum = 0, total = 0;
    
    printf("\nEnter row value:");
    scanf("%d", &m);

    printf("\nEnter column value:");
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

    for (i = 0; i < m; i++)
    {
        sum = sum + a[i][i];
        d = d + a[i][m - i - 1];
    }

    printf("\n diagonal sum is = %d", sum);
    for (j = 0; j < n; j++)
    {
        new_sum = new_sum + a[j][j];
        d = d + a[j][n - i - 1];
    }

    printf("\n anti-diagonal elements sum is = %d", new_sum);
    total = sum + sum;

    printf("\n\n cross-digonal is %d", total);

    return 0;
}