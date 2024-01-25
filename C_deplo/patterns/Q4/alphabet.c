#include <stdio.h>

void pyramid1 (unsigned int num);
void pyramid2 (unsigned int num);
void pyramid3 (unsigned int num);
void pyramid4 (unsigned int num);
unsigned int t,rows_num,i,b,d,j,c;
int main () 
{
     printf ("choose your type:\n");
      printf ("1-Pyramid with number.\n");
      printf ("2-Pyramid with alphabet.\n");
      printf ("3-Full Pyramid with number.\n");
      printf ("4-Shape.\n");
      scanf("%i",&t);
    printf ("Enter number of Rows :\n");
    scanf("%i",&rows_num);
    switch (t){
        case 1:
                pyramid1 (rows_num);
                break;
        case 2:
                 pyramid2 (rows_num);
                break;
        case 3:
                 pyramid3 (rows_num);
                break;
        case 4:
                 pyramid4 (rows_num);
                break;                                
    }
    return 0;
}
void pyramid1 (unsigned int num ){
     i=1,j=1;  
for(i;i<=num;i++)
{
      for(j;j<=i;j++)
      {
        printf("%i ",j);
      }
      j=j-2;
       for(j;(j<i)&&(j!=0);j--)
      {
        printf("%i ",j);
      }
    printf("\n");
    j=1;
    
}
}
void pyramid2 (unsigned int num){
     i=1,j=1;
     unsigned int alp=65;  
for(i;i<=num;i++)
{
      for(j;j<=i;j++)
      {
        printf("%c ",alp);
        ++alp;
      }
      j=j-2;
      alp=alp-2;
       for(j;(j<i)&&(j!=0);j--)
      {
        printf("%c ",alp);
        --alp;
      }
    printf("\n");
    j=1;
    alp=65;
}
}
void pyramid3 (unsigned int num){
  i=1,j=1,c=0;
    c=num;
for(i;i<=num;i++)
{   
  j=1;
    for(j;j<c;j++)
    {
        printf("  ");
    }
     j=1;
      for(j;j<=i;j++)
      {
        printf("%i ",j);
      }
      j=j-2;
       for(j;(j<i)&&(j!=0);j--)
      {
        printf("%i ",j);
      }
    printf("\n");
     --c; 
}
}
void pyramid4 (unsigned int num){
     i=1,b=1,d=1,j=0,c=0;
    c=(num*2)-2;
    for(i;i<=num;i++)
    {
        for(j;j<c;j++)
      {
        printf("*");     
      }
      j=0;
      for (b;b<(i+d);b++)
      {
        if((b%2)||(b==1))
        {
            printf("%i",i);   
        }
        else 
        {
          printf("*"); 
        }
      }
      b=1,++d;
      for(j;j<c;j++)
      {
        printf("*");     
      }
      j=0,--c;
      printf("\n");
    }
}