#include "stack_st.h"
/**********************************************************
 * @brief check if the stack is  empty or not
 * @param My_stack pionter to the stack
 * @retval stack status
*/
static stack_status stack_empty(stack_t *My_stack) // helper function
{
    if(My_stack->Top_pionter== -1){
    return STACK_EMPTY;
    }
    else {
        return STACK_NOTFULL;
    }
}
/**********************************************************
 * @brief check if the stack is full or not
 * @param My_stack pionter to the stack
 * @retval stack status
*/
static stack_status stack_full(stack_t *My_stack){ // helper function
     if(My_stack->Top_pionter== MAX_SIZE-1){
    return STACK_FULL;
    }
    else {
        return STACK_NOTFULL;
    }
}

return_status stack_int(stack_t *My_stack){
   return_status ret=R_NOK;
   if (NULL == My_stack)
   {
    return ret;
   }
   else
   {
    My_stack->Top_pionter=-1;
    ret=R_OK;
   }
   return ret;
}
return_status stack_push(stack_t *My_stack,uint32 value){// basic_function_1
    return_status ret=R_NOK;
   if ((NULL == My_stack) || (stack_full(My_stack)==STACK_FULL) )
   {
    return ret;
   }
   else
   {
    My_stack->Top_pionter++;
    My_stack->data_array[My_stack->Top_pionter]=value;
    ret=R_OK;
   }
   return ret;
}
return_status stack_pop(stack_t *My_stack,uint32 *value){// basic_function_2
     return_status ret=R_NOK;
   if ((NULL == My_stack) || (NULL==value) || (stack_empty(My_stack)==STACK_EMPTY) ) 
   {
    return ret;
   }
   else{
    *value=My_stack->data_array[My_stack->Top_pionter];
    My_stack->Top_pionter--;
    ret=R_OK;
   }
   return ret;
}
return_status stack_top(stack_t *My_stack,uint32 *value){ // basic_function_3
      return_status ret=R_NOK;
   if ((NULL == My_stack) || (NULL==value) || (stack_empty(My_stack)==STACK_EMPTY) )
   {
    return ret;
   }
   else{
    *value=My_stack->data_array[My_stack->Top_pionter];
    ret=R_OK;
   }
   return ret;
}
return_status stack_size(stack_t *My_stack,uint32 *size){// addition_function_1 
    return_status ret=R_NOK;
   if ((NULL == My_stack) || (NULL==size) || (stack_empty(My_stack)==STACK_EMPTY) )
   {
    return ret;
   }
   else
   {
    *size=My_stack->Top_pionter+1;
    ret=R_OK;
   }
}
return_status stack_display(stack_t *My_stack){// addition_function_2

 return_status ret=R_NOK;
 sint8 counter=ZERO;
   if ((NULL == My_stack) || (stack_empty(My_stack)==STACK_EMPTY) )
   {
    return ret;
   }
   else
   {
    printf("The Stacke elements :  ");
    for(counter=My_stack->Top_pionter;counter>=0;counter--)
    {
      printf("%i\n",My_stack->data_array[counter]);
    }
   }
   ret=R_OK;
   return ret;
}