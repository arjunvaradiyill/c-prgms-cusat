#include<stdio.h>
int main()
{
int i,j=1,num,iter;
printf("enter the number of rows:");
scanf("%d",&num);
for (i=1;i<=num;++i)
{
for(iter=1;iter<=i;iter++)
{
printf("%d\t",j);
j++;
}
  printf("\n\n");
}
}