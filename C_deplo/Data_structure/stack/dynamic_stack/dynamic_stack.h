#ifndef _STACK_DYN_H
#define _STACK_DYN_H
#include <stdio.h>
#include <stdlib.h>
#include "Standredtypes.h"
/****************************************************************************************/
/* This part depend on the project itself.
I use it to define the return status to each function. */
typedef  enum status {  
    STACK_NOK, 
    STACK_OK,   
    STACK_FULL,
    STACK_EMPTY,
    STACK_NULL_PIONTER
} STACK_STATUS;
/*******************************************************************************************/
typedef struct {
void **stackarray;  // pionter to array that allocated in the heap
sint32 stactTop;   // has the index of top element in the stack
uint32 Elementcounter;  // the actual number of the elements in the stack
uint32 stackMaxSize;    // the max number of elements in the stack
}Stack_D;
/*****************************************************************************************
 * @brief creation of dynamic stack
 * @param Maxsize max elements in stack 
 * @param ret pionter to status of stack
 * @retval pionter to stack
*/
Stack_D *creatstack( uint32 Maxsize,STACK_STATUS *ret);
/*****************************************************************************************
 * @brief  Delete dynamic stack
 * @param My_stack  pionter to the stack
 * @param ret pionter to status of stack
 * @retval NULL
*/
Stack_D *destroystack( Stack_D *My_stack , STACK_STATUS *ret);
/*****************************************************************************************
 * @brief add element to stack
 * @param My_stack  pionter to the stack
 * @param temptr pionter to new element
 * @retval status of process
*/
STACK_STATUS Pushstack (Stack_D *My_stack,void *temptr);
/*****************************************************************************************
 * @brief  delete element from stack
 * @param My_stack  pionter to the stack
 * @param temptr pionter to  element
 * @retval status of process
*/

void *PopStack (Stack_D *My_stack, STACK_STATUS *ret);
/*****************************************************************************************
 * @brief  show the element in top of stack
 * @param My_stack  pionter to the stack
 * @param temptr pionter to  element
 * @retval status of process
*/
void  *stackTop (Stack_D *My_stack,STACK_STATUS *ret);
/*****************************************************************************************
 * @brief  show the number of elements in stack
 * @param My_stack  pionter to the stack
 * @param size pionter to  place where size stoe
 * @retval status of process
*/
STACK_STATUS stackcount (Stack_D *My_stack, uint32 *size);
#endif