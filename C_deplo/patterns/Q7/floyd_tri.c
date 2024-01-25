#include <stdio.h>
unsigned int rows_num,i,j;

int main ()
{
      unsigned int c=1;  
    printf("Enter number of rows :\n");
    scanf("%i",&rows_num);
    for (i;i<=rows_num;i++)
    {
        for (j;j<i;j++)
        {
             printf("%i ",c);
             ++c;
        }
        j=0;
        printf("\n");

    }
    return 0;
}