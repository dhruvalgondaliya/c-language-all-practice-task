#include<stdio.h>
 int main (){

        int a,b,c,d,e;

        printf("\n Enter &a &b &c &d &e:");
        scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);

        (a>b)?(a>c)?(a>d)?(a>e)?printf("\n A is maximum"):printf("\n c is maximum"):printf("\n d is maximum"):printf("\n e is maximum"):
        (b>c)?(b>d)?(b>e)?printf("\n B is maximum"):printf("\n D is maximum"):printf("\n E is maximum"):
        (c>d)?(d>e)?printf("\n c is maximum"):printf("\n e is maximum"):
        (d>e)?printf("\n D is maximum"):printf("\n E is maximum");
        

       

    return 0;
 }

