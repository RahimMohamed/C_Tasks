#include <stdio.h>
 int rows_num,i=1,j=1,b=1;
int ncr (unsigned int i,unsigned int j);
int factroial (unsigned int i);
int main ()
{
    printf("Enter number of rows :\n");
    scanf("%i",&rows_num);
    for (i;i<=rows_num;i++)
    {
        for(j;j<=i;j++)
        {
            
                if ((j==1)||(j==i))
                {
                    printf("1 ");
                }
                else 
                {
                 printf("%i ",ncr((i-1),b) );
                 ++b;
                }
           
        }
        j=1,b=1;
        printf("\n");
    }   
    return 0;
}
int ncr (unsigned int i ,unsigned int j){

    unsigned int res=0;
    
    res=factorial(i)/(factorial(j)*factorial(i-j));
    return res;

}
int  factorial(int n) {
   int c;
    unsigned int  result = 1;
    
   for (c = 1; c <= n; c++)
    {
   result = result*c;
    }
   return result;
}