#include <stdio.h>
unsigned int num,powe,res;
unsigned int power (unsigned int num,unsigned int pow);
int main (){
    printf("Enter the number then the power :\n");
    scanf("%i %i",&num,&powe);
    printf("the reslt = %i\n",power(num,powe));
    return 0;
}

unsigned int power (unsigned int num,unsigned int powe){

    if (powe==0)
    {
        res=1;
    
    }
    else{

        res=num*power(num,(powe-1));
    }

        return res;

}