#include <stdio.h>
 int rows_num,i,j,space;

int main ()
{
    
    printf("Enter number of rows :\n");
    scanf("%i",&rows_num);
    printf("Right Row\n\n");
    for(i;i<rows_num;i++)
    {
        for(j;j<rows_num;j++)
        {
            if((i==rows_num/2)||(j-i==rows_num/2)||(j+i==(rows_num/2*3)))
            {
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        j=0;
        printf("\n");
    }
     printf("\n"),i=0,j=0;
printf("left Row\n\n");
    for(i;i<rows_num;i++)
    {
        for(j;j<rows_num;j++)
        {
            if((i==rows_num/2)||(j+i==rows_num/2)||(i-j==rows_num/2))
            {
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        j=0;
        printf("\n");
    }
    return 0;
}