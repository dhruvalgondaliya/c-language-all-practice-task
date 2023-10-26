#include <stdio.h>

int main()
{

    // implicit conversion

    // double value = 4150.12;
    // printf("\n double value: %.2f ",value);

    // // convert double value to integer

    // int number=value;
    // printf("\n integer value : %d",number);

    // example Two---

    // char alphabet = 'a';
    // printf("\n character value: %c", alphabet);

    // int number = alphabet;
    // printf("integer value: %d", number);

    // example three--

    // int x = 10;
    // char y = 'a';

    // x = x + y;

    // float z = x + 1.0;

    // printf("\n x=%d, z=%f",x,z);

    // Explicit Conversion

    double x = 1.2;

    int sum = (int)x + 1;
    printf("sum=%d", sum);

    return 0;
}