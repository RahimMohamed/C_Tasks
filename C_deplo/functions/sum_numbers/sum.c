#include <stdio.h>
unsigned int lowlimit,upperlimit,res=0;
unsigned int sum (unsigned int lowlimit,unsigned int upperlimit);
int main (){
    printf("Enter the lower limit & upper limit :\n");
    scanf("%i %i",&lowlimit,&upperlimit);
    printf("the result = %i\n",sum(lowlimit, upperlimit));
    return 0;
}

unsigned int sum (unsigned int lowlimit,unsigned int upperlimit){
 
    if (lowlimit <= upperlimit)
    { 
        res=upperlimit + sum(lowlimit,(upperlimit-1));
    }

        return res;

}