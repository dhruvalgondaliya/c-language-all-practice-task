#include<stdio.h>
 int main (){

        int p,q,r;

        printf("\n Enter p&q&r :");
        scanf("%d %d %d",&p,&q,&r);

       (p>q)?(p>r)?printf("\n P is maximum"):printf("\n R is maximum"):
        (q>r)?printf("\n q is maximum"):printf("\n R is maximum");

    return 0;
 }

