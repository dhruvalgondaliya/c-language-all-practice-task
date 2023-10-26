#include<stdio.h>
int main(){

        int a[100][100],n,m,i,j, sum=0,d=0;

        printf("\nEnter row value: ");
        scanf("%d",&m);

        printf("\nEnter column value: ");
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
        
         for (j = 0; j < n; j++) { 
            sum = sum + a[j][j]; 
            d = d +a[j][n - i - 1]; 
        } 
      
      
        printf("\n anti-diagonal elements sum is = %d",sum); 
      

    return 0;
}