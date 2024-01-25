#include <stdio.h>
void perf ( unsigned int first,unsigned int last);
unsigned int first,last,counter,num,sum,con1,con2;
int main()
{ 
    printf("Enter the limits :\n");
    scanf("%i %i",&first,&last);
    perf (first,last);
    
return 0;
}
void perf ( unsigned int first,unsigned int last){
    unsigned int array[100],res[30],i,j=0,sum=0,counter=0;
    for(first;first<=last;first++)
    {
    for(i=1;i<first;i++)
    {
        if((first%i)==0)
        {
            array[j]=i;
            j++;
        }
    }
    for(i=0;i<j;i++)
    {
       sum+=array[i];
    }
    if (sum==first)
    {
      res[counter]=first;
      counter++;
    }
    j=0,sum=0;
    }
    for(i=0;i<=counter;i++)
    {
        printf("%i\t",res[i]);
    }
}