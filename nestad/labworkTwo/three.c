#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter a,b,c");
    scanf("%d %d %d", &a, &b, &c);

    if (a>b)
    {
        if (a>c)
        {
            printf("\n A is maximum");
        }
        else
        {
            printf("\n C is maximum");
        }
    }
    else
    {
        if (b>c)
        {
        printf("\n B is maximum");
        }else{
        printf("\n c is maximum");
        }
        
    }

    return 0;
}