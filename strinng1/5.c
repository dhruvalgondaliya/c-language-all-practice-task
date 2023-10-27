#include <stdio.h>
#include <string.h>
int main()
{
    int k, v;
    char str[30];
    printf("Enter any string: ");
    gets(str);
    for (v = 0; str[v] != '\0'; v++)
    {
        if (str[v - 1] == ' ' || v == 0)
        {
            if (str[v] >= 'a' && str[v] <= 'z')
                str[v] = str[v] - 32;
            else if (str[v] >= 'A' && str[v] <= 'Z')
                str[v] = str[v] + 32;
        }
        printf("%c", str[v]);
    }

    return 0;
}