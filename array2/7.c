#include<stdio.h>
int main(){

        int a[60][60],n,m,i,j,sum=0,d=0;

        printf("\nEnter row value:");
        scanf("%d",&m);

        printf("\nEnter column value:");
        scanf("%d",&n);

        printf("\nEnter your elements:");
        for (i=0;i<m;i++)
        {
            for (j=0;j<n;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }

        printf(" Matrix is \n");
         for (i=0;i<m;i++)
        {
            for (j=0;j<n;j++)
            {
                printf("%d ", a[i][j]);
            }
            printf("\n");
        }
        
         for (i = 0; i < m; i++) { 
            sum = sum + a[i][i]; 
            d = d +a[i][m - i - 1]; 
        } 
     

        printf("\n diagonal elements sum is = %d",sum); 
      

    return 0;
}