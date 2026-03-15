#include<stdio.h>

#define size 3

struct students
{
    int id;
    char name[20];
    char address[50];

}student[size];


int main()
{

    for(int i=0;i<size;i++)
    {
        printf("\n\nentering details of student[%d] \n\n",i);

        printf("enter the id of student[%d] : ",i);
        scanf("%d",&student[i].id);

        printf("enter the name of student[%d] : ",i);
        scanf("%s",student[i].name);

        printf("enter the address of student[%d] : ",i);
        scanf("%s",student[i].address);
    }

    for(int i=0;i<size;i++)
    {
        printf("\nthe details of student[%d] is : \n",i);
        printf(" id = %d \n name = %s \n address = %s \n",student[i].id,student[i].name,student[i].address);
    }

    printf("\n\n");

    return 0;
}
