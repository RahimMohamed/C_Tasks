#include <stdio.h>
#include <stdlib.h>

unsigned int num1,num2,type,i,j;
int main()
{
    printf("Choose type of rectangle:\n");
    printf("1-Hollow Rectangle. \n");
    printf("2-solid Rectangle.\n");
    scanf("%d",&type);
    printf("Enter number of rows :\n");
    scanf("%d",&num1);
    printf("Enter number of columns :\n");
    scanf("%d",&num2);
    if (1==type)
    {
        for (i;i<num2;i++)
        {
            printf("*\t");
        }
        printf("\n");


         for (i=0;i<(num1-2);i++)
        {
           for (j;j<num2;j++)
           {
               if ((0==j)||((num2-1)==j))
               {
                   printf("*\t");
               }
               else
               {
                   printf(" \t");
               }
           }
              printf("\n");
              j=0;

        }
        i=0;
                for (i;i<num2;i++)
        {
            printf("*\t");
        }

    }
    else if (2==type)
    {
         for (i=0;i<num1;i++)
        {
           for (j=0;j<num2;j++)
           {
               printf("*\t");

           }
            printf("\n");
            j=0;
         }
    }
 else
 {
      printf("Invalid case \n");
 }
    return 0;
}

