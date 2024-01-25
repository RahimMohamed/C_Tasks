#include <stdio.h>
void swap(unsigned int *i,unsigned int *y);
unsigned int i, y;
int main()
{ 
    printf("Enter first number :\n");
    scanf("%i",&i);
    printf("Enter second number :\n");
    scanf("%i",&y);
    printf("Before swapping:\n");
    printf("First number:%i\n",i);
    printf("Second number:%i\n",y);
    swap (&i,&y);
    printf("After swapping:\n");
    printf("First number:%i\n",i);
    printf("Second number:%i\n",y);
return 0;
}
void swap(unsigned int *i,unsigned int *y){
    unsigned int temp=0;
    temp=*y;
    *y=*i;
    *i=temp;
}