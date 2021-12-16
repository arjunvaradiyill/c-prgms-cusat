#include<stdio.h>
int main()
{
    int row=1,column,prod;
    do
    {
    column=1;
    do
    {
    prod=row*column;
    printf("%d\t",prod);
    column++;
    }
    while(column<=10);
    printf("\n");
    row++;
    }
    while (row<=10);
    
}