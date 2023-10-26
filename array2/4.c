#include <stdio.h>
int main()
{

    int a[50][50], d[50][50],n, m, i, j;

    printf("\nEnter Row value: ");
    scanf("%d", &m);

    printf("\nEnter Colum value: ");
    scanf("%d", &n);

    printf("\nEnter your 1st Elements:");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\nEnter your 2nd Elements:");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &d[i][j]);
        }
    }

    printf(" Matrix 1st is \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf(" Matrix 2nd \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("%d ", d[i][j]);
        }
        printf("\n");
    }


    int sum[60][60];

    for (i = 0; i < m; ++i){
        for (j = 0; j < n; ++j)
        {
            sum[i][j] = a[i][j] + d[i][j];
        }
    }

    for (i = 0; i < m; ++i){
        for (j = 0; j < n; ++j)
        {
            printf(" \n Sum is %d", sum[i][j]);
            if (j == n - 1)
            {
                printf("\n");
            }
        }
    }
    return 0;
}