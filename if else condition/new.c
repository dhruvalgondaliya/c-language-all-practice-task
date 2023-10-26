#include <stdio.h>
int main()

{

    int s1, s2, s3, total;
    float per;

    printf("Enter 3 subject marks");
    scanf("%d %d %d", &s1, &s2, &s3);

    total = s1 + s2 + s3;
    printf("\nyour total marks %d", total);

    per = (float)total / 3;
    printf("\n percentance is %.2f", per);

    if (per >= 90)
    {
        printf("\n your grade is  A+");
    }
    else if (per >= 80 && per < 90)
    {
        printf("\n your grade is A");
    }
    else if (per >= 70 && per < 80)
    {
        printf("\n your grade is B+");
    }
    else if (per >= 60 && per < 70)
    {
        printf("\n your grade is B");
    }
    else if (per >= 50 && per < 60)
    {
        printf("\n your grade is C");
    }
    else
    {
        printf("\n your grade is fail");
        
    }


    return 0;

}
