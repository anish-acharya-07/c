#include<stdio.h>

int main()
{
    int number;
    int a = 0 ; 
    int b = 1 ;
    int c = a + b ;

    printf("enter a number to generate a Fibonacci series : ");
    scanf("%d",&number);

    printf("%d\t%d\t",a,b);

    for(int i=0;i<number;i++)
    {
        printf("%d\t",c);
        a = b;
        b = c;
        c = a + b;
    }


    return 0;
}