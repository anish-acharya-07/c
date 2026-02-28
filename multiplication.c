#include<stdio.h>

int main()
{

 int user_input ;
 int i;
 int result;

 printf("\n\nenter a number to display multiplication : ");
 scanf("%d",&user_input);

 printf("\n");



 for(i=1;i<=10;i++)
 {
    result = user_input * i ;
    printf("%d * %d = %d \n",user_input,i,result);
 }

 printf("\n");

return 0;
}
