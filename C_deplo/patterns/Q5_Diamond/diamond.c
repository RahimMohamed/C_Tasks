#include <stdio.h>
void Solid_diamond (unsigned int num);
void Hollow_diamond (unsigned int num);
void SolidHalf_diamond (unsigned int num);
unsigned int t,num_rows,i,j,space;


int main ()
{
   printf ("choose your type:\n");
      printf ("1-Solid diamond.\n");
      printf ("2-Hollow diamond.\n");
      printf ("3-Solid half diamondr.\n");
      scanf("%i",&t);
    printf ("Enter half number of Rows  :\n");
    scanf("%i",&num_rows);
    switch (t){
        case 1:
                Solid_diamond (num_rows);
                break;
        case 2:
                 Hollow_diamond (num_rows);
                break;
        case 3:
                 SolidHalf_diamond (num_rows);
                break;
    }           
    return 0;

}

void Solid_diamond (unsigned int num){
    i=1,space=num-1;
    for (i;i<=num;i++)
    {
        for (j;j<space;j++)
        {
            printf(" ");
        }
        --space,j=0;
        for (j;j<i;j++)
        {
            printf("* ");
        }
        j=0;
        printf("\n");
    }
    i=num,space=0,j=0;
    for (i;i>0;i--)
    {
        for (j;j<space;j++)
        {
            printf(" ");
        }
        ++space,j=0;
        for (j;j<i;j++)
        {
            printf("* ");
        }
        j=0;
        printf("\n");
    }

}
void Hollow_diamond (unsigned int num){
 i=1,space=num-1;
    for (i;i<=num;i++)
    {
        for (j;j<space;j++)
        {
            printf(" ");
        }
        --space,j=0;
        for (j;j<i;j++)
        {
            if ((j==0)||(j==(i-1)))
            {
            printf("* ");
            }
            else{
                 printf("  ");
            }
        }
        j=0;
        printf("\n");
    }
    i=num,space=0,j=0;
    for (i;i>0;i--)
    {
        for (j;j<space;j++)
        {
            printf(" ");
        }
        ++space,j=0;
        for (j;j<i;j++)
        {
            if ((j==0)||(j==(i-1)))
            {
            printf("* ");
            }
            else{
                 printf("  ");
            }
        }
        j=0;
        printf("\n");
    }
}
void SolidHalf_diamond (unsigned int num){
   i=1;
    for (i;i<=num;i++)
    {
        for (j;j<i;j++)
        {
            printf("* ");
        }
        j=0;
        printf("\n");
    }
    i=num-1,j=0;
    for (i;i>0;i--)
    {
        for (j;j<i;j++)
        {
            printf("* ");
        }
        j=0;
        printf("\n");
    }
}