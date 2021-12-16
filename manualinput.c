#include<stdio.h>
int main()
{
    FILE *f;
    char c;
    printf("\nData Input\n\n");
    f=fopen("INPUT","w");
    while ((c=getchar() ) !=EOF)
         putc(c,f);
    fclose(f);
    printf("\nData Output\n\n");
    f=fopen("INPUT","r");
    while((c=getc(f) ) !=EOF)
         printf("%c",c);
    fclose(f);
}