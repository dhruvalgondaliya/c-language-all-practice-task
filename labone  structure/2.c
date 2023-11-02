#include <stdio.h>
struct em
{
    int id,age;
    char name[50],role[50], city[50],comn[50],exp[50];
};


int main()
{

    struct em em[500];

    for (int i = 0; i < 3; i++)
    {
        printf("Enter Emplooyes %d\n", i + 1);
        printf("Enter Emplooyes id . :\n");
        scanf("%d", &em[i].id);
        printf("EnterEmplooyes name :\n");
        fflush(stdin);
        scanf("%s", &em[i].name);
        printf("Enter  Emplooyes age :\n");
        scanf("%d", &em[i].age);
        printf("Enter  role :\n");
        fflush(stdin);
        scanf("%s", &em[i].role);
        printf("Enter your city :\n");
        fflush(stdin);
        scanf("%s", &em[i].city);
        printf("Enter your experience:\n");
        scanf("%s", &em[i].exp);
        printf("Enter compny name :\n");
        fflush(stdin);
        scanf("%s", &em[i].comn);
    }

    printf("\n\n----------------------------Emplooyes Details------------------------\n\n");
    printf("\n ID  \t\tNAME  \t\tAGE  \t\trole  \t\tCITY  \t\texperince  \t\tcomn");

    for (int i = 0; i < 3; i++)
    {
        printf("\n%d  \t\t%s  \t\t%d  \t\t%s  \t\t%s  \t\t%s  \t\t%s ", em[i].id, em[i].name, em[i].age, em[i].role,
               em[i].city, em[i].exp, em[i].comn);
    }
    return 0;
}