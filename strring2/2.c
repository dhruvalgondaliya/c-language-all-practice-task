#include <stdio.h>
#include <string.h>
#define Username "dhruv123"
#define Password "Dh@51291"
int main()
{
    printf("\n Your id:dhruv123");
    printf("\n Your Password is: Dh@51291 ");

    char d[30], Pas[30];

    printf("\nEnter Your id: ");
    scanf("%s", &d);
    printf("\nEnter Your Password: ");
    scanf("%s", &Pas);

    if (strcmp(d, Username) == 0 && strcmp(Pas, Password) == 0)
    {
        printf("\nLogin Succesfull.\n");
    }

    else
    {
        printf("\nLogin Failed.\n");
    }

    return 0;
}