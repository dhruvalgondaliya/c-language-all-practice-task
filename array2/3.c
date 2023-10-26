#include<stdio.h>
int main(){

        int a[60][60];
        int n,m,i,j;
        
        printf("\nEnter Row Value: ");
        scanf("%d",&m);

        printf("\nEnter Column Value: ");
        scanf("%d",&n);

        printf("\nEnter your Elements:");
        for (i=0;i<m;i++)
        {
            for (j=0;j<n;j++)
            {
                scanf("%d",&a[i][j]);
            }
            
        }
        printf(" Matrix is :\n");
         for (i=0;i<m;i++)
        {
            for (j=0;j<n;j++)
            {
                printf("%d ",a[i][j]);
            }
            printf("\n");
        }


       float sum=0,avreg;
         for (i=0;i<m;i++)
        {
            for (j=0;j<n;j++)
            {
                sum=sum+a[i][j];
                printf("\n");
            }
            
        }
        avreg=sum/(m*n);
        printf("\n average is %.2f",avreg);

    return 0;
}