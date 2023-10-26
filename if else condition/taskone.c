#include <stdio.h>
int main()
{

    int g;
    int v;

    printf("Enter g&v value:",g,v);
    scanf("%d %d", &g, &v);

    if (g < v)
    {
        printf("\n g is minimum");
    }

    else
    {
        printf("\n v is minimum");

    }

    return 0;
}