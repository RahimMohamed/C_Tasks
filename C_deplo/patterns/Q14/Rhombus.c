#include <stdio.h>
 int i,j,n;

int main ()
{
    
    printf("Enter number of rows :\n");
    scanf("%i",&n);
    for(i;i<n;i++)
    {
        for(j;j<n-i;j++)
        {
                printf(" ");
        }
        j=0;
         for(j;j<n;j++)
        {
                printf("*");
        }
        j=0;

        printf("\n");
    }
    j=0,i=0;
    printf("\n");
    printf("Hollow one :\n\n");
 for(i;i<n;i++)
    {
        for(j;j<n-i;j++)
        {
                printf(" ");
        }
        j=0;
         for(j;j<n;j++)
        {
            if ((i==0)||(i==n-1)||(j==0)||(j==n-1))
            {
                printf("*");
            } 
            else
            {
                printf(" ");
            }   
        }
        j=0;

        printf("\n");
    }
    
    return 0;
}