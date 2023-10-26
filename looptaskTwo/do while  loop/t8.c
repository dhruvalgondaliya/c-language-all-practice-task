#include <stdio.h>
int main() {
    int n, d, sum = 0;
    printf("Enter your number: ");
    scanf("%d", &n);
    d = 1;
do
     {
        sum += d;
                printf("\n  %d",d);
        ++d;
    }while (d <= n);

    printf("\nSum = %d", sum);
    return 0;
}