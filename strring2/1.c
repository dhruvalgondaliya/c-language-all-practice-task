#include <stdio.h>
#include <string.h>
#define m 50
int main()
{
    char ps[m];
    int i, l = 0, p;
    char h = '@', d = '$', g = '#';
    int lw = 0;
    int upper = 0;
    int digit = 0;
    int spi = 0;

    printf("Enter a One Uppercase Letter \n");
    printf("Use This Special Charecter in Your Password(@,#,$)\n");
    printf("Enter Some Digits \n");
    printf("Enter a Lowercase Charecter \n\n");

    printf("Enter password:");
    scanf("%s", &ps);
    if (strlen(ps) >= 7)
    {
        p = strlen(ps);
        for (i = 0; i < p; i++)
        { if (ps[i] >= 'A' && ps[i] <= 'Z')
                ++upper;
            if (ps[i] >= 'a' && ps[i] <= 'z')
                ++lw;
            if (ps[i] >= '0' && ps[i] <= '9')
                ++digit;
            if (ps[i] == '@' || ps[i] == '$' || ps[i] == '#')
                ++spi;
        }
        if (lw > 0 && upper > 0 && digit > 0 && spi > 0)
        {
            printf("\nPassword succesfull ");
        }
        else
        {
            printf(" Password not succes ");
        }
    }
    else
    {
        printf("Please Enter Minimum 7 Cheracter");
    }
    return 0;
}