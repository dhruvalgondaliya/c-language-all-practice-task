#include<stdio.h>
int main(){
   
   int i,j,count=0;
   for (i=0;i<=4;i++)
   {
    for (j=0;j<=4;j++)
    {
        if (j<=i)
        {
            printf("%c ",count+'A');
            count++;
        }  
        
    }
      printf("\n");
   }   

    return 0;

}