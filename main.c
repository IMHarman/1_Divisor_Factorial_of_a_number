#include <stdio.h>
#include <stdlib.h>

void factorial()
{
    int no, fac=1;
    printf("Enter the number : ");
    scanf("%d",&no);
    int a = no;
    do
    {
        fac *= a--;
    }while( a != 1);
    printf("Factorial of %d is : %d",no,fac);
}

void divisor()
{
    int x,i;
    printf("Input a number : ");
    scanf("%d",&x);
    printf("All the divisor of %d are : ",x);
    for(i=1; i<=x; i++)
    {
        if((x%i) == 0)
        {
            printf("%d",i);
            printf(" ");
        }
    }
}

int main()
{
    int ch;
    printf("\n\t\t\t---------MENU----------");
    printf("\n\n\n1. Factorial of a number.");
    printf("\n2. Divisor of a number.");
    printf("\nEnter your choice : ");
    scanf("%d",&ch);

    switch(ch)
    {
        case 1 : factorial();
                 break;

        case 2 : divisor();
                 break;

        default: printf("PLease enter a valid input.");
                 return 0;
    }
    return 0;
}
