#include <stdio.h>
int main()
{

    int s1, s2, s3, total;
    float per;

    printf("Enter 3 subject marks:");
    scanf("%d %d %d", &s1, &s2, &s3);

    total = s1 + s2 + s3;
    
    printf("\n total marks is %d", total);
    per = (float)total / 3;
    printf("\n percentage marks is %.2f", per);

    if (per >= 80)
    {
        printf("\n grade A+");
    }
    else if (per >= 70 && per < 80)
    {
        printf("\n grade A");
    }

    else if (per >= 60 && per < 70)
    {
        printf("\n grade B+");
    }
    else if (per >= 50 && per < 60)
    {
        printf("\n grade B");
    }
    else if (per >= 40 && per < 50)
    {
        printf("\n grade c");
    }
    else
    {
        printf("\n grade fail");
    }





    return 0;
}
