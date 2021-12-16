#include <stdio.h>

int main()
{
   int y=1,n,j,count,i=2;
   printf("enter the n:");
   scanf("%d",&n);
   while(y<=n)
   {
     count=0;
     for(j=1;j<=i;j++)
     {
        if(i%j==0)
        count++;
     }
     if(count==2)
     {
        printf("%d\t",i);
        y++;
     } 
     i++;
   } 
}
