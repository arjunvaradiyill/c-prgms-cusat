#include<stdio.h>
int main()
{
    int i,j,num,p[100][100];
    printf("enter the no of rows:");
    scanf("%d",&num);
    p[0] [0]=1;
    for(i=1;i<=num;i++)
    {
    for(j=1;j<=i;j++)
    {
    p[i] [j]=p[i-1][j-1]+p[i-1][j];
    printf("%d\t",p[i][j]);
    }
    printf("\n");
    }
}