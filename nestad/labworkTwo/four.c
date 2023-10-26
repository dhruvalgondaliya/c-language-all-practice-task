#include <stdio.h>

int main
()
{
    int a, b, c, d;

    printf("Enter a,b,c,d:");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (a > b)
    {
        if (a > c)
        {
            if (a > d)
            {
                printf("\nA is maximum");
            }
            else
            {
                printf("\nD is maximum");
            }
        }
        else
        {
            printf("\nc is maximum");
        }
    }
    else
    {
        if (b > c)
        {
            if (b > d)
            {
                printf("\nB is maximum");
            }
            else
            {
                printf("\nD is maximum");
            }
        }

        else
        {
            if (c>d)
            {
                printf("\nC is maximum");
            }else{
                printf("\n D is maximum");
            }
        }
    }

    return 0;
}