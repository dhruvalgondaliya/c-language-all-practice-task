#include <stdio.h>
int main()
{

    int x;

    printf("Enter value");
    scanf("%d", &x);

    if (x > 0)
    {
        printf("\n x is positiv");
    }
    else if (x < 0)
    {
        printf("\n x is negative");
    }
    else{
        printf("\n x is zero");
    }

    return 0;
}