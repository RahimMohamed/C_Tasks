#include <stdio.h>
void prime(unsigned int num);

unsigned int i;
int main()
{ 
    printf("Enter the number :\n");
    scanf("%i",&i);
    prime(i);

return 0;
}
void prime (unsigned int num){
unsigned int counter=0;
for(i=1;i<num;i++)
{
     if ((num%i)==0)
     counter ++;

}
if (counter==1)
{
    printf("%i is a prime number.\n",num);
}
else
{
    printf("%i is not a prime number.\n",num);
}
}