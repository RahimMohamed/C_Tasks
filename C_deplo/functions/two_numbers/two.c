#include <stdio.h>
void compare (unsigned int num1,unsigned int num2);
unsigned int num1,num2;
int main()
{ 
    printf("Enter the numbers :\n");
    scanf("%i %i",&num1,&num2);
    compare (num1,num2);


return 0;
}
void compare (unsigned int num1,unsigned int num2){

    if (num1>num2)
    {
        printf("The max number =%i\n",num1);
         printf("The min number =%i\n",num2);
    }
    else{
        printf("The max number =%i\n",num2);
         printf("The min number =%i\n",num1);
    }
    }

