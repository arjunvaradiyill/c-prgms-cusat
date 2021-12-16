#include<stdio.h>
int main()
{
    int row=1,column,prod;
    while(row<=10)
    {
    column=1;
    while(column<=10)
    {
    prod=row*column;
    column++;
    printf("%d\t",prod);

    }
    printf("\n");
    row++;
    }
}