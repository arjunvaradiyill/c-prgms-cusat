#include<stdio.h>
int main()
{
    int n,i,flag=0,key,a[10];
    printf("enter the no of elements:");
    scanf("%d",&n) ;
    printf("enter the elements:");
    for(i=0;i<=n-1;i++)
    scanf("%d",&a[i]);
    printf("Enter the key to be searched:");
    scanf("%d",&key);
    for (i=0;i<=n-1;i++)
    {
        if(a[i]==key)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    printf("element is  present");
    else
    printf("element is  not found");
}