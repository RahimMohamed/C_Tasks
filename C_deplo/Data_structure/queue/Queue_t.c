#include "Queue_t.h"
static uint8 queue_empty (Queue_D * My_queue){ // helper function
    return(My_queue->Elementcounter == 0);
}
/***************************************************************************/


static uint8 queue_full (Queue_D * My_queue){ //helper function
    return(My_queue->Elementcounter == My_queue->QueueMaxSize);
}
/***************************************************************************/


Queue_D *creatQueue( uint32 Maxsize,QUEUE_STATUS *ret){
    Queue_D *My_queue=NULL;
    if(NULL==ret)
    {
        *ret=QUEUE_NULL_PIONTER;
    }
    else{
        My_queue=(Queue_D *)malloc (sizeof(Queue_D));
        if(!My_queue)
        {
            *ret=QUEUE_NOK;
        }
        else{
           My_queue->Queuearray=(void **)calloc(Maxsize,sizeof(void *));
           if (!My_queue->Queuearray)
           {
            *ret=QUEUE_NOK;
           }
           else{
            My_queue->QueueFront=-1;
            My_queue->QueueRear=-1;
            My_queue->QueueMaxSize=Maxsize;
            My_queue->Elementcounter=0;
            *ret=QUEUE_OK;
           }
        }
    }
    return My_queue;
}

/******************************************************************************/

QUEUE_STATUS Enqueue (Queue_D *My_queue,void *temptr){
    QUEUE_STATUS RET=QUEUE_NOK;
    if ((NULL == My_queue) || (NULL == temptr))
    {
        return RET;
    }
    else if (queue_full(My_queue))
    {
        RET=QUEUE_FULL;
    }
    else{
        ( My_queue->QueueRear)++;
        if (My_queue->QueueRear == My_queue->QueueMaxSize)
        {
            My_queue->QueueRear=0;
        }
        My_queue->Queuearray[My_queue->QueueRear]=temptr;
         if (My_queue->Elementcounter == 0)
        {
            My_queue->QueueFront=0;
        }
        (My_queue->Elementcounter)++;
        RET=QUEUE_OK;
    }
    return RET;
}

/*****************************************************************************************/


void *Dequeue (Queue_D *My_queue, QUEUE_STATUS *ret){
     void *datadeleted=NULL;
     if ((NULL == My_queue) || (NULL == ret))
    {
        *ret=QUEUE_NULL_PIONTER;
    }
    else if (queue_empty(My_queue))
    {
        *ret=QUEUE_EMPTY;
    }
    else{
        datadeleted=My_queue->Queuearray[My_queue->QueueFront];
        (My_queue->QueueFront)++;
        if (My_queue->QueueFront == My_queue->QueueMaxSize)
        {
            My_queue->QueueFront=0;
        }
        if(1 == My_queue->Elementcounter)
        {
             My_queue->QueueFront=-1;
              My_queue->QueueRear=-1;
        }
        (My_queue->Elementcounter)--;
        *ret=QUEUE_OK;
    }
    return datadeleted;
}

/**************************************************************************************************/


void  *QueueFront (Queue_D *My_queue,QUEUE_STATUS *ret){
    void *datadeleted=NULL;
     if ((NULL == My_queue) || (NULL == ret))
    {
        *ret=QUEUE_NULL_PIONTER;
    }
    else if (queue_empty(My_queue))
    {
        *ret=QUEUE_EMPTY;
    }
    else{
        datadeleted=My_queue->Queuearray[My_queue->QueueFront];
        *ret=QUEUE_OK;
    }
    return datadeleted;
}


/******************************************************************************************/
void  *QueueRear (Queue_D *My_queue,QUEUE_STATUS *ret){
   void *datadeleted=NULL;
     if ((NULL == My_queue) || (NULL == ret))
    {
        *ret=QUEUE_NULL_PIONTER;
    }
    else if (queue_empty(My_queue))
    {
        *ret=QUEUE_EMPTY;
    }
    else{
        datadeleted=My_queue->Queuearray[My_queue->QueueRear];
        *ret=QUEUE_OK;
    }
    return datadeleted;
}


/*****************************************************************************************/

QUEUE_STATUS Queuecount (Queue_D *My_queue, uint32 *size){

    QUEUE_STATUS RET=QUEUE_NOK;
   if ((NULL == My_queue) || (NULL == size))
    {
        return RET;
    }
    else if (queue_empty(My_queue))
    {
        RET=QUEUE_EMPTY;
    }
    else{
        *size=My_queue->Elementcounter;
        if(!size)
        {
            RET=QUEUE_NOK;
        }
        else{
            RET=QUEUE_OK;
        }
    }
    return RET;
}

/*****************************************************************************************************/

Queue_D *destroyqueue( Queue_D *My_queue , QUEUE_STATUS *ret){

     if((NULL==ret) || NULL == (My_queue))
    {
        *ret=QUEUE_NULL_PIONTER;
    }
    else{
        free(My_queue->Queuearray);
        free(My_queue);
        *ret=QUEUE_OK;
    }
    return NULL;
}