#include <stdio.h>
int main() {
    int n, d, sum = 0;
    printf("Enter your number: ");
    scanf("%d", &n);
    d = 1;

    while (d <= n) {
        sum += d;
                printf("\n  %d",d);
        ++d;
    }

    printf("\nSum = %d", sum);
    return 0;
}