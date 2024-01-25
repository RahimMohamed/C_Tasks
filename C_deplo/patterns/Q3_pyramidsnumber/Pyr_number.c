#include <stdio.h>
#include <stdlib.h>

void Solid_Halfpyramid (unsigned int num);
void inverted_Solid_Halfpyramid (unsigned int num);
void invertedHollow_Halfpyramid (unsigned int num);
void Solid_pyramid (unsigned int num);
void Hollow_pyramid (unsigned int num);
void Hollow_halfpyramid (unsigned int num);

unsigned int num_rows,t;

int main ()
{
    printf("Choose type of Pyramid :\n");
    printf("1-Solid half pyramid.\n");
    printf("2-Inverted Solid half pyramid.\n");
    printf("3-Inverted Hollow half pyramid.\n");
    printf("4-Solid  pyramid.\n");
    printf("5-Hollow pyramid.\n");
    printf("6-Hollow half pyramid.\n");
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
               Hollow_pyramid (num_rows);
               break;
        case 6:
                 Hollow_halfpyramid (num_rows);   
                 break;  
     }
    return 0;
}

void Solid_Halfpyramid (unsigned int num){

unsigned int i=1,j=1;

for(i;i<=num;i++)
{
    
    for(j;j<=i;j++)
    {
        printf("%i",j);
    }
    printf("\n");
    j=1;
}

}
void inverted_Solid_Halfpyramid (unsigned int num){
    unsigned int i=num,j=1;
    for(i;i>0;i--)
{
    
    for(j;j<=i;j++)
    {
        printf("%i",j);
    }
    printf("\n");
    j=1;
}
}
void invertedHollow_Halfpyramid (unsigned int num){
        unsigned int i=num,j=1,c=num,d=2;
    
    for(j;j<=i;j++)
    {
        printf("%i",j);
        printf(" ");
    }
    printf("\n");
    j=2;
    i--;
     for(i;i>=1;i--)
     {
         for(j;j<=c;j++)
         {
            if ((j==d)||(j==c))
            {
                 printf("%i",j);
                 printf(" ");
            }
            else 
            {
                printf("  ");
            }
         }
         printf("\n");
         ++d;
         j=d;
     }
    
}
void Solid_pyramid (unsigned int num){

    unsigned int i=2,j=1,c=0,d=1;
    c=num;
     for(j;j<c;j++)
    {
        printf("  ");     
    }
    printf("1\n");
    c-=2;
for(i;i<=num;i++)
{
    j=0;
    for(j;j<c;j++)
    {
        printf("  ");
    }
     j=i;
      for(j;j<=(i+d);j++)
      {
        printf("%i",j);
         printf(" ");
      }
      j=(i+d)-1;
       for(j;j>=i;j--)
      {
        printf("%i",j);
         printf(" ");
      }
    printf("\n");
     d+=1;
     --c; 
}
}

void Hollow_pyramid (unsigned int num){

    unsigned int i=1,j=0,c=num-1;
for(i;i<num;i++)
{
    
    for(j;j<c;j++)
    {
        printf(" ");
    }
     j=1;
      for(j;j<=i;j++)
      {
        if ((j==1)||(j==i))
        {
        printf("%i",j);
         printf(" ");
        }
        else 
        {
          printf("  ");  
        }
      }
       
    printf("\n");
     j=0;
     --c; 
}
i=num,j=1;
 for(j;j<=i;j++)
      {
        printf("%i",j);
         printf(" ");
      }

}
void Hollow_halfpyramid (unsigned int num){
    unsigned int i=1,j=1;
for(i;i<num;i++)
{
      for(j;j<=i;j++)
      {
        if ((j==1)||(j==i))
        {
        printf("%i",j);
        printf(" ");
        }
        else {
         printf("  ");
        }
      }
       
    printf("\n");
     j=1;
    
}
 for(j;j<=i;j++)
      {
         printf("%i",j);
         printf(" ");
      }
}
