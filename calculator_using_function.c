#include<stdio.h>

int sum(int , int);
int difference(int , int);
int multiplication(int , int);
float division(float , float);


int main()
{
    int user_choice;
    int first_number , second_number ;
    printf("\n**********welcome to my calculator**********\n\n");

    printf("enter first number : ");
    scanf("%d",&first_number);

    printf("enter second number : ");
    scanf("%d",&second_number);
    
    printf("\nwhat would you like to do ?\n"
        "1. sum\n"
        "2. difference\n"
        "3. multiplication\n"
        "4. division\n"
        "Enter (1,2,3,4) : ");

        scanf("%d",&user_choice);

        

        if(user_choice == 1)
        {
            printf("\n%d + %d = %d \n",first_number,second_number,sum(first_number , second_number));
        }
        else if (user_choice == 2)
        {
            printf("\n%d - %d = %d \n",first_number,second_number,difference(first_number , second_number)); 
        }
        else if (user_choice == 3)
        { 
            printf("\n%d * %d = %d \n",first_number,second_number,multiplication(first_number , second_number));
        }
        else if (user_choice == 4)
        {
            printf("\n%d / %d = %.2f \n",first_number,second_number,division(first_number , second_number)); 
        }
        else
        {
            printf("invalid choice");
        }
        
    printf("\n");
    return 0;
}


int sum(int first_number , int second_number)
{
    return (first_number + second_number);
}

int difference(int first_number , int second_number)
{
    return (first_number - second_number);
}

int multiplication(int first_number , int second_number)
{
    return (first_number * second_number);
}

float division(float first_number , float second_number)
{
    return (first_number / second_number);
}
