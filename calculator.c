#include<stdio.h>


int main()
{
    int a,b,sum;
    char choice;
    printf ("Enter + for addition \n"
    "enter - for subtraction\n"
    "enter * for multiplication\n"
    "enter / for division\n"
    "enter a choice\n");
    scanf("%c",&choice);
    printf("enter the numbers");
    scanf("%d%d",&a,&b);
    switch (choice)
    {
    case '*':
       sum=a*b;
       printf("%d*%d=%d",a,b,sum);
       break;
    case '+':
       sum=a+b;
       printf("%d+%d=%d",a,b,sum);
       break;  
    case '/':
       sum=a/b;
       printf("%d/%d=%d",a,b,sum);
       break; 
    case '-':
       sum=a/b;
       printf("%d/%d=%d",a,b,sum);
       break;
    default:printf("invaild input");
    }
}