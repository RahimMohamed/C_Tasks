#include <stdio.h>
void diamond1 (unsigned int num,unsigned int s);
void diamond2 (unsigned int num);
void diamond3 (unsigned int num);
void diamond4 (unsigned int num);
unsigned int t,num_rows,i,j,space,start;


int main ()
{
   printf ("choose your type:\n");
      printf ("1-diamond.\n");
      printf ("2-diamond2.\n");
      printf ("3-diamond3.\n");
      printf ("4-diamond4.\n");
      scanf("%i",&t);
    printf ("Enter half number of Rows  :\n");
    scanf("%i",&num_rows);
    switch (t){
        case 1:
                printf ("Enter the start :\n");
                scanf("%i",&start);
                diamond1 (num_rows,start);
                break;
        case 2:
                 diamond2 (num_rows);
                break;
        case 3:
                 diamond3 (num_rows);
                break;
        case 4:
                 diamond4 (num_rows);
                break;     
    }           
    return 0;

}
void diamond1 (unsigned int num,unsigned int s){
i=s,j=1;unsigned int b=1;
    for (b;b<=num;b++)
    {
        for (j;j<=b;j++)
        {
            printf("%i",i);
        }
        ++i,j=1;
        printf("\n");
    }
    i-=2,j=1,b=num-1;
    for (b;b>0;b--)
    {
        for (j;j<=b;j++)
        {
            printf("%i",i);
        }
        j=1,--i;
        printf("\n");
    }
}
void diamond2 (unsigned int num){
i=1,j=1;
    for (i;i<=num;i++)
    {
        for (j;j<=i;j++)
        {
            if (j!=1)
            {
            printf("*%i",i);
            }
            else 
            {
                printf("%i",i);
            }
        }
        j=1;
        printf("\n");
    }
    j=1,i=num;
    for (i;i>0;i--)
    {
        for (j;j<=i;j++)
        {
            if (j!=1)
            {
            printf("*%i",i);
            }
            else 
            {
                printf("%i",i);
            }
        }
        j=1;
        printf("\n");
    }
}
void diamond3 (unsigned int num){
i=1,j=1;
 unsigned int c=1 ;
    for (i;i<=num;i++)
    {
        for (j;j<=i;j++)
        {
            if (j!=1)
            {
            printf("*%i",c);
            }
            else 
            {
                printf("%i",c);
            }
            ++c;
        }
        j=1;
        printf("\n");
    }
    j=1,i=num,c-=num;
    for (i;i>0;i--)
    {
        for (j;j<=i;j++)
        {
            if (j!=1)
            {
            printf("*%i",c);
            }
            else 
            {
                printf("%i",c);
            }
            ++c;
        }
        j=1,c=c-(i*2)+1;
        printf("\n");
    }
}
void diamond4 (unsigned int num){
i=1,j=1;
unsigned int c=1,d=1,b=0;
    printf("*\n");
    for(i;i<=num;i++)
    {
        b=i+d;
        for(j;j<=b;j++)
        {
            if(j==1)
            {
                printf("* ");
            }
            else if (c<=i)
            {
                printf("%i ",c);
                ++c;
            }
            
        }  
        b=i,j=1,c-=2;
         for(j;j<=b;j++)
        {
            
            if ((c<i)&&(c!=0))
            {
                printf("%i ",c);
                --c;
            }
            else if(j==b)
            {
                printf("* ");
            }
            
        }  

        printf("\n"),++d,j=1,c=1;
    }
   i=num-1,d=1;
   for(i;i>0;i--)
    {
        b=i+d;
        for(j;j<=b;j++)
        {
            if(j==1)
            {
                printf("* ");
            }
            else if (c<=i)
            {
                printf("%i ",c);
                ++c;
            }
            
        }  
        b=i,j=1,c-=2;
         for(j;j<=b;j++)
        {
            
            if ((c<i)&&(c!=0))
            {
                printf("%i ",c);
                --c;
            }
            else if(j==b)
            {
                printf("* ");
            }
            
        }  

        printf("\n"),++d,j=1,c=1;
    }
    printf("*");
 
}