#include <stdio.h>

int main()
{

    int a[] = {1, 2, 3, 4, 5};
    int len;

    len = sizeof(a) / sizeof(a[0]);

    printf(" The length of the array is: %d\n", len);

    return 0;
}