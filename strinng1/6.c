#include <stdio.h>
#include <string.h>
int main()
{
    char dh[1000];
    int i;

    printf("\n Enter character:");
    gets(dh);

    printf("\n your character is:");
    puts(dh);

    for (i = 0; dh[i]; i++)
    {

        if (dh[i] >= 65 && dh[i] <= 90)

            dh[i]+= 32;
        else if (dh[i] >= 97 && dh[i] <= 122)
            dh[i]-= 32;
    }

    printf("\n string in toggel is %s",dh);

    return 0;
}