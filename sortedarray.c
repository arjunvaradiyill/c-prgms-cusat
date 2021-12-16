//selection sort
#include<stdio.h>
int main()
{
  int a[100],n,i,j,position,swap,small;
  printf("Enter no of elements:");
  scanf("%d",&n);
  printf("Enter %d numbers:", n);
  for (i=0;i<n;i++)
       scanf("%d",&a[i]);
  for (i=0;i<n-1;i++)
  {
  small=a[i];
  for(j=i+1;j<=n-1;j++)
  {
  if (a[j]<=small)
  {
  small=a[j];
  position=j;
  }
  }
  swap=a[position];
  a[position]=a[i];
  a[i]=swap;
  }
  printf("sorted array:\n");
  for(i=0;i<n;i++)
  printf("%d\n",a[i]);  
}