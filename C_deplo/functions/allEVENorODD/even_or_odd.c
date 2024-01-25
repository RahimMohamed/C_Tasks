#include <stdio.h>
void even(unsigned int lowlimit,unsigned int upperlimit);
void odd(unsigned int lowlimit,unsigned int upperlimit);
unsigned int lowlimit, upperlimit;
int main()
{ 
    printf("Enter The lower limit & upper limit:\n");
    scanf(" %i %i",&lowlimit,& upperlimit);
    printf("Even numbers:\t");
    even(lowlimit,upperlimit);
    printf("\n");
    printf("Odd numbers:\t");
    odd(lowlimit,upperlimit);
return 0;
}
void  even(unsigned int lowlimit,unsigned int upperlimit){
 
if (lowlimit <= upperlimit)
{
    if (lowlimit%2==0){
    printf("%i\t",lowlimit);
    }
    ++lowlimit;
    even(lowlimit,upperlimit);
}
}
void odd(unsigned int lowlimit,unsigned int upperlimit){
if (lowlimit <= upperlimit)
{
     
    if (lowlimit%2!=0){
    printf("%i\t",lowlimit);
    }
    ++lowlimit;
    odd(lowlimit,upperlimit);
}
}