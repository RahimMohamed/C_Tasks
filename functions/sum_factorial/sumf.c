#include <stdio.h>
unsigned int sum (unsigned int num);
unsigned int factorial (unsigned int num);
unsigned int i;
int main()
{ 
    printf("Enter The number :\n");
    scanf(" %i",&i);
    printf("the result =%i\n", sum(i));
return 0;
}
unsigned int sum (unsigned int num){
unsigned int res=0,i=1;
for(i;i<=num;i++)
{
    res+=(factorial(i)/i);
  
}
     return res; 
}
unsigned int factorial (unsigned int num){
  unsigned int fa=1;
for(i=1;i<=num;i++)
{
    fa=fa*i;
} 
return fa;

}