#include <stdio.h>
main()
{
    int i=0,sum=0,n;
    printf("/n ENTER A VALUE FOR THE NUMBER n:");
    scanf("%d",&n);
    while(i <=n)
    {
        sum=sum+i;
        i=i+1;
    }
    printf("The sum is: %d",sum);
}
