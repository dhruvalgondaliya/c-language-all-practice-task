#include <stdio.h>
int main() {
    int r, k=1;
    printf("Enter your number: ");
    scanf("%d", &r);
    k= 1;

    while (k <= 10) {

        printf("%d * %d = %d \n", r, k, r*k);

        ++k;
    }

   
    return 0;
}