#include <stdio.h>
unsigned int square(unsigned int i);
unsigned int i,res;
int main()
{ 
    printf("Enter The number :\n");
    scanf(" %i",&i);
    printf("The result :%i",square(i));
return 0;
}
unsigned int square(unsigned int i){
    res=i*i;
    return res;
}