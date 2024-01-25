#ifndef _STACK_DS_H
#define _STACK_DS_H
#include <stdio.h>
#include <stdlib.h>
#include "Standredtypes.h"
/********************************************************************************/
#define MAX_SIZE 7
/*********************************************************************************/
typedef struct {
   sint8 Top_pionter;
   uint32 data_array[MAX_SIZE];
}stack_t;
/************************************************************************************/
typedef enum {
    STACK_EMPTY,
    STACK_NOTFULL,
    STACK_FULL,
}stack_status;
/***********************************************************************************
 * 
 * @brief initialize the stack pionter 
 * @param My_stack pionter to the stack
 * @retval status of the initializition process
*/
return_status stack_int(stack_t *My_stack);
/*************************************************************************************
 * @brief add new element to stack 
 * @param My_stack pionter to the stack
 * @param value which push to stack
 * @retval status of the pushing process
 */
return_status stack_push(stack_t *My_stack,uint32 value);
/*************************************************************************************
 * @brief  clear element from stack 
 * @param My_stack pionter to the stack
 * @param value pionter where elemnt go
 * @retval status of the clearing process
 */
return_status stack_pop(stack_t *My_stack,uint32 *value);
/*************************************************************************************
 * @brief  show the element in top of the stack
 * @param My_stack pionter to the stack
 * @param value pionter where elemnt go
 * @retval status of the process
 */
return_status stack_top(stack_t *My_stack,uint32 *value);
/*************************************************************************************
* @brief  show the size of stack
 * @param My_stack pionter to the stack
 * @param size pionter size go
 * @retval status of the process
*/
return_status stack_size(stack_t *My_stack,uint32 *size);
/*************************************************************************************
* @brief  show the elemnts of stack
 * @param My_stack pionter to the stack
 * @retval status of the process
*/
return_status stack_display(stack_t *My_stack);



























#endif