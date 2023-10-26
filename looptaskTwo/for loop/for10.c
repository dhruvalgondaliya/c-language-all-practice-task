#include <stdio.h>
int main()
{
    int r, k = 1;
    printf("Enter your number: ");
    scanf("%d", &r);
    k = 1;

    for (r, k = 1; k <= 10; ++k)
    {
        printf("%d * %d = %d \n", r, k, r * k);
    }

    return 0;
}