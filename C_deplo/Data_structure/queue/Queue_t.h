#ifndef _Queue_DYN_H
#define _Queue_DYN_H
#include <stdio.h>
#include <stdlib.h>
#include "Standredtypes.h"
/****************************************************************************************/
/* This part depend on the project itself.
I use it to define the return status to each function. */
typedef  enum status {  
    QUEUE_NOK, 
    QUEUE_OK,   
    QUEUE_FULL,
    QUEUE_EMPTY,
    QUEUE_NULL_PIONTER
} QUEUE_STATUS;
/*******************************************************************************************/
typedef struct {
void **Queuearray;  // pionter to array that allocated in the heap
sint32 QueueFront;   // has the index of top element in the stack
sint32 QueueRear;
uint32 Elementcounter;  // the actual number of the elements in the stack
uint32 QueueMaxSize;    // the max number of elements in the stack
}Queue_D;
/*****************************************************************************************
 * @brief creation of queue
 * @param Maxsize max elements in queue
 * @param ret pionter to status of queue
 * @retval pionter to queue
*/
Queue_D *creatQueue( uint32 Maxsize,QUEUE_STATUS *ret);
/*****************************************************************************************
 * @brief  Delete Queue
 * @param My_stack  pionter to the Queue
 * @param ret pionter to status of Queue
 * @retval NULL
*/
Queue_D *destroyqueue( Queue_D *My_queue , QUEUE_STATUS *ret);
/*****************************************************************************************
 * @brief add element to queue
 * @param My_stack  pionter to the queue
 * @param temptr pionter to new element
 * @retval status of process
*/
QUEUE_STATUS Enqueue (Queue_D *My_queue,void *temptr);
/*****************************************************************************************
 * @brief  delete element from queue
 * @param My_stack  pionter to the queue
 * @param temptr pionter to  element
 * @retval status of process
*/

void *Dequeue (Queue_D *My_queue, QUEUE_STATUS *ret);
/*****************************************************************************************
 * @brief  show the element in front of queue
 * @param My_stack  pionter to the queue
 * @param temptr pionter to  element
 * @retval status of process
*/
void  *QueueFront (Queue_D *My_queue,QUEUE_STATUS *ret);
/*****************************************************************************************
 * @brief  show the element in rear of queue
 * @param My_stack  pionter to the queue
 * @param temptr pionter to  element
 * @retval status of process
*/
void  *QueueRear (Queue_D *My_queue,QUEUE_STATUS *ret);
/*****************************************************************************************
 * @brief  show the number of elements in queue
 * @param My_stack  pionter to the queue
 * @param size pionter to  place where size stoe
 * @retval status of process
*/
QUEUE_STATUS Queuecount (Queue_D *My_queue, uint32 *size);
#endif