#include <stdio.h>
unsigned int sum(unsigned int i,unsigned int y);
unsigned int i, y,res;
int main()
{ 
    printf("Enter two numbers :\n");
    scanf("%i %i",&i,&y);
    printf("The sum :%i",sum(i,y));
return 0;
}
unsigned int sum(unsigned int i,unsigned int y){
    res=i+y;
    return res;
}