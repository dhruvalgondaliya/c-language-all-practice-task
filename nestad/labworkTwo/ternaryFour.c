#include<stdio.h>
 int main (){

        int j,k,l,m;

        printf("\n Enter j&k&l&m:");
        scanf("%d %d %d %d",&j,&k,&l,&m);

        (j>k)?(j>l)?(j>m)?printf("\n j is maximum"):printf("\n l is maximum"):("\n m is maximum"):
        (k>l)?(k>m)?printf("\n k is maximum"):printf("\n m is maximum"):
        (l>m)?printf("\n l is maximum"):printf("\n m is maximum");

    return 0;
 }

