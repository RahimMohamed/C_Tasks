#include <stdio.h>
#include <stdlib.h>
#include "dynamic_stack.h"

uint32 max_size,counter,size;
STACK_STATUS status=STACK_NOK;
Stack_D *stack1=NULL;
void * outdata=NULL;

uint32 var1=5,var2=10,var3=15;

int main(){

  printf("Enter the max number of stack:");
  scanf("%i",&max_size);
  stack1=creatstack(max_size,&status);
  if (status == STACK_OK)
  {
    printf("Stack allocated Successfully.\n");
  }
  else{
    printf("Error happened !!!\n");
  }
  printf("----------------------------------------------------------\n");
  
    status=Pushstack(stack1,&var1);
    if (status == STACK_OK)
  {
    printf("first element has been added Successfully.\n");
  }
  else if (status == STACK_FULL)
  {
   printf("Stach is full,Please delete some elements.\n");
  }
  

  else{
    printf("Error happened !!!\n");
  
  }
  status=Pushstack(stack1,&var2);
    if (status == STACK_OK)
  {
    printf("Seconed element has been added Successfully.\n");
  }
  else if (status == STACK_FULL)
  {
   printf("Stach is full,Please delete some elements.\n");
  }
  

  else{
    printf("Error happened !!!\n");
  
  }
  status=Pushstack(stack1,&var3);
    if (status == STACK_OK)
  {
    printf("Third element has been added Successfully.\n");
  }
  else if (status == STACK_FULL)
  {
   printf("Stach is full,Please delete some elements.\n");
  }
  

  else{
    printf("Error happened !!!\n");
  
  }
printf("----------------------------------------------------------\n");
outdata=stackTop(stack1,&status);
if (status == STACK_OK)
  {
    printf("The top element in stack = %i\n",*(uint32 *)outdata);
  }
  else if (status == STACK_EMPTY)
  {
   printf("Stach is empty,Please add some elements.\n");
  }
  

  else{
    printf("Error happened !!!\n");
  }
printf("----------------------------------------------------------\n");
status=stackcount(stack1,&size);
if (status == STACK_OK)
  {
    printf("The number of elements in stack = %i\n",size);
  }
  else if (status == STACK_EMPTY)
  {
   printf("Stach is empty,Please add some elements.\n");
  }
  

  else{
    printf("Error happened !!!\n");
  }
printf("----------------------------------------------------------\n");
printf("----------------------------------------------------------\n");
outdata=PopStack(stack1,&status);
if (status == STACK_OK)
  {
    printf("The element %i has been removed\n",*(uint32 *)outdata);
  }
  else if (status == STACK_EMPTY)
  {
   printf("Stach is empty,Please add some elements.\n");
  }
  

  else{
    printf("Error happened !!!\n");
}
printf("----------------------------------------------------------\n");
printf("----------------------------------------------------------\n");
outdata=stackTop(stack1,&status);
if (status == STACK_OK)
  {
    printf("The top element in stack = %i\n",*(uint32 *)outdata);
  }
  else if (status == STACK_EMPTY)
  {
   printf("Stach is empty,Please add some elements.\n");
  }
  

  else{
    printf("Error happened !!!\n");
  }
printf("----------------------------------------------------------\n");
status=stackcount(stack1,&size);
if (status == STACK_OK)
  {
    printf("The number of elements in stack = %i\n",size);
  }
  else if (status == STACK_EMPTY)
  {
   printf("Stach is empty,Please add some elements.\n");
  }
  else{
    printf("Error happened !!!\n");
}
printf("----------------------------------------------------------\n");
printf("----------------------------------------------------------\n");
outdata=PopStack(stack1,&status);
if (status == STACK_OK)
  {
    printf("The element %i has been removed\n",*(uint32 *)outdata);
  }
  else if (status == STACK_EMPTY)
  {
   printf("Stach is empty,Please add some elements.\n");
  }
  

  else{
    printf("Error happened !!!\n");
}
printf("----------------------------------------------------------\n");
printf("----------------------------------------------------------\n");
outdata=stackTop(stack1,&status);
if (status == STACK_OK)
  {
    printf("The top element in stack = %i\n",*(uint32 *)outdata);
  }
  else if (status == STACK_EMPTY)
  {
   printf("Stach is empty,Please add some elements.\n");
  }
  

  else{
    printf("Error happened !!!\n");
  }
printf("----------------------------------------------------------\n");
status=stackcount(stack1,&size);
if (status == STACK_OK)
  {
    printf("The number of elements in stack = %i\n",size);
  }
  else if (status == STACK_EMPTY)
  {
   printf("Stach is empty,Please add some elements.\n");
  }
  else{
    printf("Error happened !!!\n");
}
printf("----------------------------------------------------------\n");
destroystack(stack1,&status);
if (status == STACK_OK)
  {
    printf("The stack has been deleted.\n");
  }
  else{
    printf("Error happened !!!\n");
}
    return 0;
}