#include <stdio.h>
#include <stdlib.h>
#include "stack_st.h"

stack_t stack_1;
stack_t stack_2;
return_status RET;
uint32 value,size;
uint8 counter=MAX_SIZE;

int main (){

printf("we will initialize two stacks.\n");
RET=stack_int(&stack_1);
if (RET == R_NOK)
{
    printf("Error happened !!!\n");
}
else
{
    printf("Stack 1 has been initizialized Successfully.\n");
}
RET=stack_int(&stack_2);
if (RET == R_NOK)
{
    printf("Error happened !!!\n");
}
else
{
    printf("Stack 1 has been initizialized Successfully.\n");
}
printf("Enter elemnts of stack 1:\n");
while (counter--)
{
    printf("Enter the new element:");
    scanf("%i",&value);
    RET=stack_push(&stack_1,value);
    if (RET == R_NOK)
{
    printf("Error happened !!!\n");
    break;
}
else
{
    printf("Element has been added Successfully.\n");
}
}
counter=MAX_SIZE;
printf("Enter elemnts of stack 2:\n");
while (counter--)
{
    printf("Enter the new element:");
    scanf("%i",&value);
    RET=stack_push(&stack_2,value);
    if (RET == R_NOK)
{
    printf("Error happened !!!\n");
    break;
}
else
{
    printf("Element has been added Successfully.\n");
}

}
printf("we will clear two elements from stack_1!!!\n");
counter=2;
while(counter--)
{
   RET=stack_pop(&stack_1,&value);
    if (RET == R_NOK)
{
    printf("Error happened !!!\n");
    break;
}
else
{
    printf("The element %d has been removed.\n",value);
}
}
printf("we will clear three elements from stack_2!!!\n");
counter=3;
while(counter--)
{
   RET=stack_pop(&stack_2,&value);
    if (RET == R_NOK)
{
    printf("Error happened !!!\n");
    break;
}
else
{
    printf("The element %i has been removed.\n",value);
}
}
RET=stack_top(&stack_1,&value);
    if (RET == R_NOK)
{
    printf("Error happened !!!\n");
}
else
{
    printf("The top element in stack 1 = %i.\n",value);
}
RET=stack_top(&stack_2,&value);
    if (RET == R_NOK)
{
    printf("Error happened !!!\n");
}
else
{
    printf("The top element in stack 2 = %i.\n",value);
}
RET=stack_size(&stack_1,&size);
    if (RET == R_NOK)
{
    printf("Error happened !!!\n");
}
else
{
    printf("The size of stack 1 = %i.\n",size);
}
RET=stack_size(&stack_2,&size);
    if (RET == R_NOK)
{
    printf("Error happened !!!\n");
}
else
{
    printf("The size of stack 2 = %i.\n",size);
}
stack_display(&stack_1);
stack_display(&stack_2);
return 0;
}