#include<stdio.h>
int main()
{
    int row1,column1,row2,column2;
    int a[10][10],b[10][10],p[10][10],c[100][100] ;
    int i,j,m;
    int sum = 0;
    printf("rows and column of matrix first metrix: ");
    scanf("%d %d",&row1,&column1);
    printf("\nrows and colums of matrix second metrix: ");
    scanf("%d %d",&row2,&column2);
    int choice;
    printf("choices are \n1 for Addition\n2 for Multiplication\n3 for exit");
    printf("\nenter your choice\n>>>");
    scanf("%d",&choice);
    if (choice == 1)
    {
        
            printf("elements of first matrix\n");
            for(i=0;i<row1;i++)
            {
                for(j=0;j<column1;j++)
                {
                    scanf("%d",&a[i][j]);
                }
            }
            printf("elements of second matrix\n");
            for(i=0;i<row2;i++)
            {
                for(j=0;j<column2;j++)
                {
                    scanf("%d",&b[i][j]);
                }
            }
            for(i=0;i<row2;i++)
            {
                for(j=0;j<column2;j++)
                {
                    c[i][j] = a[i][j] + b[i][j];
                }
            }
            printf("the resultant matrix is\n");
            for(i=0;i<row1;i++)
            {
                for(j=0;j<column1;j++)
                {
                    printf("%d ",c[i][j]);
                }
                printf("\n");   
            }
        
    }
    else
    if( choice == 2)
    {

            printf("Enter the elements of first matrix\n");
            for(i=0;i<row1;i++)
            {
                for(j=0;j<column1;j++)
                {
                    scanf("%d",&a[i][j]);
                }
            }
            printf("Enter the elements of second matrix\n");
            for(i=0;i<row2;i++)
            {
                for(j=0;j<column2;j++)
                {
                    scanf("%d",&b[i][j]);
                }
            }
        
            for(i=0;i<row1;i++)
            {
                for(j=0;j<column2;j++)
                {
                    for(m=0;m<row2;m++)
                    {
                        sum +=a[i][m]  * b[m][j];
                    }
                    p[i][j] = sum;
                    sum = 0;
                }
            }
            printf("the resultant matrix is\n");
            for(i=0;i<row1;i++)
            {
                for(j=0;j<column2;j++)
                {
                    printf("%d ",p[i][j]);
                }
                printf("\n");   
            }
        
        
       
        
    }
    else
    if(choice == 3)
    {
        printf("sucessfully exited");
    }
    return 0;
}