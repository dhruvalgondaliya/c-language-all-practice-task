#include <stdio.h>
int main()
{
    int a, b, c, d, e;

    printf("Enter a,b,c,d,e:");

    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    if (a > b)
    {
        if (a > c)
        {
            if (a > d)
            {
                if (a > e)
                {
                    printf("\n A is maximum");
                }
                else
                {
                    printf("\n E is maximum");
                }
            }
            else
            {
                printf("\n D is maximum");
            }
        }
        else
        {
            printf("\n c is maximum");
        }
    }
    else
    {
        if (b > c)
        {
            if (b > d)
            {
                if (b > e)
                {
                    printf("\n B is maximum");
                }
                else
                {
                    printf("\n E is maximum");
                }
            }
            else
            {
                printf("\n D is maximum");
            }
        }
        else
        {

            if (c > d)
            {
                if (c > e)
                {
                    printf("\n C is maximum");
                }
                else
                {
                    printf("\n E is maximum");
                }
            }
            else
            {

                if (d>e)
                {
                    printf("\n D is maximum");
                    
                }else{
                    printf("\n E is maximum");

                }
            }
        }
    }
}

