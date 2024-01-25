#include <stdio.h>
 int rows_num,i=1,j=1,space=1;

int main ()
{
    printf("Enter number of rows :\n");
    scanf("%i",&rows_num);
    i=rows_num;
    for (i;i>0;i--)
    {
        for(j;j<=i;j++)
        {
            printf("*");
        }
        j=rows_num;
        for (j;j>=i;j--)
        {
            printf("  ");
        }
        j=1;
        for(j;j<=i;j++)
        {
            printf("*");
        }
        j=1;
        printf("\n");
    }
    i=1;
     for (i;i<=rows_num;i++)
    {
        for(j;j<=i;j++)
        {
            printf("*");
        }
        j=rows_num;
        for (j;j>=i;j--)
        {
            printf("  ");
        }
        j=1;
        for(j;j<=i;j++)
        {
            printf("*");
        }
        j=1;
        printf("\n");
    }
    


    return 0;
}