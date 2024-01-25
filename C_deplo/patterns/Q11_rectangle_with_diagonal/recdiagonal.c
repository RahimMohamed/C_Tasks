#include <stdio.h>
 int rows_num,i=1,j=1,space;

int main ()
{
    printf("Enter number of rows :\n");

    scanf("%i",&rows_num);
    for(i;i<=rows_num;i++)
    {
        for (j;j<=rows_num;j++)
        {
            if((i==1)||(i==rows_num))
            {
                printf("*");
            }
           else  if((j==1)||(j==rows_num))
            {
                    printf("*");
            }
              else  if((j==i)||(j==(rows_num-i+1)))
            {
                    printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        j=1;
        printf("\n");
    }
    return 0;
}