#include <stdio.h>
unsigned int cube (unsigned int num);
unsigned int j,i;
int main()
{ 
    printf("Enter the number :\n");
    scanf("%i",&i);
    printf("The cube of number = %i\n",cube(i));


return 0;
}
unsigned int cube (unsigned int num){
    j=num*num*num;
    return j;
}