#include <stdio.h>
void nat_num(unsigned int lowlimit,unsigned int upperlimit);
unsigned int lowlimit, upperlimit;
int main()
{ 
    printf("Enter The lower limit & upper limit:\n");
    scanf(" %i %i",&lowlimit,& upperlimit);
   nat_num(lowlimit,upperlimit);
return 0;
}
void  nat_num(unsigned int lowlimit,unsigned int upperlimit){
if (lowlimit <= upperlimit)
{
    printf("%i\t",lowlimit);
    ++lowlimit;
    nat_num(lowlimit,upperlimit);
}
}