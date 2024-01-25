#include <stdio.h>
void check(unsigned int i);
unsigned int i;
int main()
{ 
    printf("Enter The number :\n");
    scanf(" %i",&i);
    check(i);
return 0;
}
void check(unsigned int i){
    if((i%2)==0)
        {
            printf("The number is even.\n");
        }
        else{
            printf("The number is odd.\n");
        }
    
}