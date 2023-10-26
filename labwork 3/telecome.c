#include <stdio.h>

int main()
{
    int dv;
    printf("\n welcome to telecome service");
    printf("\n Enter your choice:");

    scanf("\n %d", &dv);

    switch (dv)
    {
    case 1:
        printf("\n Gujrati ke liye press one");
        break;
    case 2:
        printf("\n Hindi ke liye press two");
        break;
    case 3:
        printf("\n English ke liye press three");
        break;
    case 4:
        printf("\n network issu ke liye press four");
        break;
    case 5:
        printf("\n New wifi conection ke liye press five");
        break;
    case 6:
        printf("\n New offer ke plan ke liye press six");
        break;
    case 7:
        printf("\n call recive me koi issu he to press seven");
        break;
    case 8:
        printf("\n 5g service upgrade karne ke liye press eight");
        break;
    case 9:
        printf("\n advicer sathe vaat karva mate press nine ");
        break;
    case 0:
        printf("\n  listern to repeat press zero");
        break;
    default:
        printf("\n invalid chooice");
         break;
    }

    return 0;
}