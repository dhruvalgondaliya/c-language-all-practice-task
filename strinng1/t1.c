#include <stdio.h>
#include <string.h>
int main()
{
    char ch, lw;
    int ascii;

    printf("Enter uppercase Char:");
    scanf("%c", &ch);
    
    ascii = ch;
    lw = ascii + 32;
    
    printf("\n your Lowerchar is %C:", lw);

    return 0;
}