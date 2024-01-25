#include <stdio.h>
void binary(unsigned int num);

unsigned int i;
int main()
{ 
    printf("Enter the number :\n");
    scanf("%i",&i);
    binary(i);

return 0;
}
void binary (unsigned int num){

while(num!=0)
{
    if((num%2)==0)
    {
        printf("0");
    }
    else
    {
        printf("1");
    }
    num=num/2;
}

}