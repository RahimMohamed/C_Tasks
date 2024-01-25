#include <stdio.h>
#include <math.h>
void Arm ( unsigned int num);
void perf ( unsigned int num);
unsigned int counter,num,sum,con1,con2;
int main()
{ 
    printf("Enter number of elements :\n");
    scanf("%i",&num);
    Arm(num);
    perf (num);
    
return 0;
}
void Arm ( unsigned int num){

unsigned int i,digit=0;
con1=num;
con2=num;
   while((num%10)!=0)
   {
    counter++;
    num=num/10;
   }
   for(i=0;i<counter;i++)
   {
    digit=con1%10;
     sum+=pow(digit,counter);
     con1/=10;
   }
   if(sum==con2)
   {
    printf("%i is a armstong number\n",con2);
   }
   else
   {
     printf("%i is not a armstong number\n",con2);
   }
}
void perf ( unsigned int num){
    unsigned int array[100],i,j=1,sum=0;
    array[0]=0;
    for(i=1;i<num;i++)
    {
        if((num%i)==0)
        {
            array[j]=i;
            j++;
        }
    }
    for(i=0;i<j;i++)
    {
       sum+=array[i];
    }
    if (sum==num)
    {
        printf("%i is a perfect number.",num);
    }
    else
    {
         printf("%i is not a perfect number.",num);
    }
    
}