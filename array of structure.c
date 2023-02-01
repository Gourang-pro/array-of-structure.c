#include<stdio.h>
#include<conio.h>

struct student
{
    char name[20];
    int roll;
};
void main()
{
    struct student stu[3];
    int i;
    for(i=0;i<3;i++)
    {
        printf("enter name :");
        scanf("%s",&stu[i].name);
        printf("enter roll no :");
        scanf("%d",&stu[i].roll);

    }
    for ( i = 0; i<3; i++)
    {
        printf("\nstudent name :%s",stu[i].name);
        printf("\nstudent roll no :%d\n",stu[i].roll);
    }
    
}
