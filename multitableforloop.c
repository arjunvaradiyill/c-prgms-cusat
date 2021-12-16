#include<stdio.h>
int main()
{
    int row,column,prod;
    for(row=1;row<=10;row++)
    {
        for(column=1;column<=10;column++)
        {
            prod=row*column;
            printf("%d\t",prod);
        }
    printf("\n");
    }
}