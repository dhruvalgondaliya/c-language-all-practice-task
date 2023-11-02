#include <stdio.h>

struct Student
{
    int stu_id, stu_age,stu_std;
    char stu_name[50], stu_course[50], stu_city[50],  stu_school[50];
};

int main()
{

    int n, i;
    struct Student student;


    for (i = 0; i < 3; i++)
    { fflush(stdin);

        printf("Enter Student ID: ");
        scanf("%d", &student.stu_id);
        fflush(stdin);

        printf("Enter Student Name: ");
        gets(student.stu_name);

        printf("Enter Student Age: ");
        scanf("%d", &student.stu_age);
        fflush(stdin);

        printf("Enter Student Course: ");
        gets(student.stu_course);

        printf("Enter Student City: ");
        gets(student.stu_city);
        fflush(stdin);

        printf("Enter Student Std: ");
        gets(student.stu_std);

        printf("Enter Student School: ");
        gets(student.stu_school);
    }

    printf("\n \t\t-------------------------------------student details------------------------------------");

    printf("\nID   \t    NAME   \t   AGE   \t COURSE   \t   CITY   \t\t STD  \t\t    SCHOOL\n");
    for ( i = 0; i < 3; i++)
    {
        printf("%d        %s          %d            %s              %s               %d            %s\n",student.stu_id,student.stu_name,student.stu_age,student.stu_course,student.stu_city,student.stu_std,student.stu_school);
    }
    

    printf("\n \t\t-------------------------------------End student details------------------------------------");

  

    return 0;
}
