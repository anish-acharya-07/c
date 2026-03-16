#include<stdio.h>
#define size 3

int main()
{
    int id;
    char name[20];
    char address[50];

    FILE *file;

    //writing in file

    file = fopen("STUDENT.txt","a");

    for(int i=0;i<size;i++)
    {
        printf("\n\nentering details of student[%d] \n\n",i);

        printf("enter the id of student[%d] : ",i);
        scanf("%d",&id);

        printf("enter the name of student[%d] : ",i);
        scanf("%s",name);

        printf("enter the address of student[%d] : ",i);
        scanf("%s",address);

        fprintf(file,"%d\n%s\n%s\n\n",id,name,address);

    }
    
    fclose(file);

    //reading from file
    
    file = fopen("STUDENT.txt","r");

    int i = 0;

    while (fscanf(file,"%d\n%s\n%s\n\n",&id,name,address) != EOF)
    {
        printf("\nthe details of student[%d] is : \n",i);
        printf(" id = %d \n name = %s \n address = %s \n",id,name,address);
        i++;
    }
    

    printf("\n\n");

    fclose(file);


    return 0;
}