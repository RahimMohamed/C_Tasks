#include "dynamic_stack.h"
static uint8 stack_empty (Stack_D * My_stack){ // helper function
    return(My_stack->Elementcounter == 0);
}
/***************************************************************************/


static uint8 stack_full (Stack_D * My_stack){ //helper function
    return(My_stack->Elementcounter == My_stack->stackMaxSize);
}
/***************************************************************************/


Stack_D *creatstack( uint32 Maxsize,STACK_STATUS *ret){
    Stack_D *My_stack=NULL;
    if(NULL==ret)
    {
        *ret=STACK_NULL_PIONTER;
    }
    else{
        My_stack=(Stack_D *)malloc (sizeof(Stack_D));
        if(!My_stack)
        {
            *ret=STACK_NOK;
        }
        else{
            My_stack->Elementcounter = 0;
            My_stack->stactTop = -1;
            My_stack->stackMaxSize = Maxsize;
            My_stack->stackarray=(void **)calloc(My_stack->stackMaxSize,sizeof(void *));
            if(!My_stack->stackarray)
            {    
                free(My_stack);
                *ret=STACK_NOK;
                My_stack=NULL;
            }
            else{
                *ret=STACK_OK;
            }
        }
    }
    return My_stack;
}

/******************************************************************************/

STACK_STATUS Pushstack (Stack_D *My_stack,void *temptr){
    STACK_STATUS RET=STACK_NOK;
    if ((NULL == My_stack) || (NULL == temptr))
    {
        return RET;
    }
    else if (stack_full(My_stack))
    {
        RET=STACK_FULL;
        
    }
    else{
        (My_stack->stactTop)++;
        My_stack->stackarray[My_stack->stactTop]=temptr;
        (My_stack->Elementcounter)++;
        RET=STACK_OK;
    }
    return RET;
}

/*****************************************************************************************/


void *PopStack (Stack_D *My_stack, STACK_STATUS *ret){
     void *datadeleted=NULL;
     if ((NULL == My_stack) || (NULL == ret))
    {
        *ret=STACK_NULL_PIONTER;
    }
    else if (stack_empty(My_stack))
    {
        *ret=STACK_EMPTY;
    }
    else{
        datadeleted=My_stack->stackarray[My_stack->stactTop];
        (My_stack->stactTop)--;
       ( My_stack->Elementcounter)--;
       if(!datadeleted)
       {
        *ret=STACK_NOK;
       }
       else{
        *ret=STACK_OK;
       }
    }
    return datadeleted;
}

/**************************************************************************************************/


void  *stackTop (Stack_D *My_stack,STACK_STATUS *ret){
    void *datadeleted=NULL;
     if ((NULL == My_stack) || (NULL == ret))
    {
        *ret=STACK_NULL_PIONTER;
    }
    else if (stack_empty(My_stack))
    {
        *ret=STACK_EMPTY;
    }
    else{
        datadeleted=My_stack->stackarray[My_stack->stactTop];
       if(!datadeleted)
       {
        *ret=STACK_NOK;
       }
       else{
        *ret=STACK_OK;
       }
    }
    return datadeleted;
}

/******************************************************************************************/

STACK_STATUS stackcount (Stack_D *My_stack, uint32 *size){

    STACK_STATUS RET=STACK_NOK;
   if ((NULL == My_stack) || (NULL == size))
    {
        return RET;
    }
    else if (stack_empty(My_stack))
    {
        RET=STACK_EMPTY;
    }
    else{
        *size=My_stack->Elementcounter;
        if(!size)
        {
            RET=STACK_NOK;
        }
        else{
            RET=STACK_OK;
        }
    }
    return RET;
}

/*****************************************************************************************************/

Stack_D *destroystack( Stack_D *My_stack , STACK_STATUS *ret){

     if((NULL==ret) || NULL == (My_stack))
    {
        *ret=STACK_NULL_PIONTER;
    }
    else{
        free(My_stack->stackarray);
        free(My_stack);
        *ret=STACK_OK;
    }
    return NULL;
}