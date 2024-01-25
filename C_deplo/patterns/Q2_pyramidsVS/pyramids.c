#include <stdio.h>
#include <stdlib.h>

void Solid_Halfpyramid (unsigned int num);
void inverted_Solid_Halfpyramid (unsigned int num);
void invertedHollow_Halfpyramid (unsigned int num);
void Solid_pyramid (unsigned int num);
void inverted_Solid_pyramid (unsigned int num);
void Hollow_pyramid (unsigned int num);

unsigned int num_rows,t;

int main ()
{
    printf("Choose type of Pyramid :\n");
    printf("1-Solid half pyramid.\n");
    printf("2-Inverted Solid half pyramid.\n");
    printf("3-Inverted Hollow half pyramid.\n");
    printf("4-Solid  pyramid.\n");
    printf("5-Inverted Solid pyramid.\n");
    printf("6-Hollow pyramid.\n");
    scanf("%i",&t);
     printf("Enter number of rows :\n");
     scanf("%i",&num_rows);
     switch (t)
     {
        case 1:
               Solid_Halfpyramid(num_rows);
               break;
        case 2:
               inverted_Solid_Halfpyramid (num_rows);
               break;
        case 3:
                 invertedHollow_Halfpyramid (num_rows);   
                 break;  
        case 4:
               Solid_pyramid(num_rows);
               break;
        case 5:
               inverted_Solid_pyramid (num_rows);
               break;
        case 6:
                 Hollow_pyramid (num_rows);   
                 break;  
     }
    return 0;
}

void Solid_Halfpyramid (unsigned int num){

unsigned int i=1,j=0;

for(i;i<=num;i++)
{
    
    for(j;j<i;j++)
    {
        printf("*");
    }
    printf("\n");
    j=0;
}

}
void inverted_Solid_Halfpyramid (unsigned int num){
    unsigned int i=num,j=0;
    for(i;i>0;i--)
{
    
    for(j;j<i;j++)
    {
        printf("*");
    }
    printf("\n");
    j=0;
}
}
void invertedHollow_Halfpyramid (unsigned int num){
        unsigned int i=num,j=0;
    
    for(j;j<i;j++)
    {
        printf("*");
    }
    printf("\n");
    j=0;
    --i;
     for(i;i>1;i--)
     {
         
            for(j;j<i;j++)
            {
                if ((j==0)||(j==(i-1)))
                {
                printf("*");
                }
                else 
                {
                     printf(" ");
                }
            }
        printf("\n");
           j=0;
     }
     printf("*");
}
void Solid_pyramid (unsigned int num){

    unsigned int i=1,j=0,c=0;
    c=num-1;
for(i;i<=num;i++)
{
    
    for(j;j<c;j++)
    {
        printf(" ");
    }
     j=0;
      for(j;j<i;j++)
      {
        printf("*");
         printf(" ");
      }
       
    printf("\n");
     j=0;
     --c; 
}
}
void inverted_Solid_pyramid (unsigned int num){

    unsigned int i=num,j=0,c=0;
for(i;i>0;i--)
{
    
    for(j;j<c;j++)
    {
        printf(" ");
    }
     j=0;
      for(j;j<i;j++)
      {
        printf("*");
         printf(" ");
      }
       
    printf("\n");
     j=0;
     ++c; 
}

}
void Hollow_pyramid (unsigned int num){
    unsigned int i=1,j=0,c=0;
    c=num-1;
for(i;i<num;i++)
{
    
    for(j;j<c;j++)
    {
        printf(" ");
    }
     j=0;
      for(j;j<i;j++)
      {
        if ((j==0)||(j==(i-1)))
        {
        printf("*");
        printf(" ");
        }
        else {
         printf("  ");
        }
      }
       
    printf("\n");
     j=0;
     --c; 
}
 for(j;j<i;j++)
      {
        printf("*");
         printf(" ");
      }
}
