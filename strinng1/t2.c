#include <stdio.h>
#include <string.h>
int main()
{
    char ch, lw;
    int ask;

    printf("Enter lower Char:");
    scanf("%c", &ch);
    
    ask = ch;
    lw = ask - 32;
    
    printf("\n your upperchar is %C:", lw);

    return 0;
}