#include <stdio.h>
#include <stdlib.h>
#include "Queue_t.h"

uint32 max_size,counter,size;
QUEUE_STATUS status=QUEUE_NOK;
Queue_D *queue1=NULL;
void * outdata=NULL;

uint32 var1=5,var2=10,var3=15,var4=20,var5=25,var6=30;

int main(){

  printf("Enter the max number of queue elements:");
  scanf("%i",&max_size);
  queue1=creatQueue(max_size,&status);
  if (status == QUEUE_OK)
  {
    printf("Queue allocated Successfully.\n");
  }
  else{
    printf("Error happened !!!\n");
  }
  printf("----------------------------------------------------------\n");
  status=Enqueue(queue1,&var1);
  if (status == QUEUE_OK)
  {
    printf("Elemente %i entered queue Successfully.\n",var1);
  }
  else if (status == QUEUE_FULL)
  {
     printf("Queue is full,please delete some elements!!!\n");
  }
  else{
    printf("Error happened !!!\n");
  }
    status=Enqueue(queue1,&var2);
  if (status == QUEUE_OK)
  {
     printf("Elemente %i entered queue Successfully.\n",var2);
  }
  else if (status == QUEUE_FULL)
  {
     printf("Queue is full,please delete some elements!!!\n");
  }
  else{
    printf("Error happened !!!\n");
  }
    status=Enqueue(queue1,&var3);
  if (status == QUEUE_OK)
  {
    printf("Elemente %i entered queue Successfully.\n",var3);
  }
  else if (status == QUEUE_FULL)
  {
     printf("Queue is full,please delete some elements!!!\n");
  }
  else{
    printf("Error happened !!!\n");
  }
    status=Enqueue(queue1,&var4);
  if (status == QUEUE_OK)
  {
    printf("Elemente %i entered queue Successfully.\n",var4);
  }
  else if (status == QUEUE_FULL)
  {
     printf("Queue is full,please delete some elements!!!\n");
  }
  else{
    printf("Error happened !!!\n");
  }
    status=Enqueue(queue1,&var5);
  if (status == QUEUE_OK)
  {
     printf("Elemente %i entered queue Successfully.\n",var5);
  }
  else if (status == QUEUE_FULL)
  {
     printf("Queue is full,please delete some elements!!!\n");
  }
  else{
    printf("Error happened !!!\n");
  }
    status=Enqueue(queue1,&var6);
  if (status == QUEUE_OK)
  {
     printf("Elemente %i entered queue Successfully.\n",var6);
  }
  else if (status == QUEUE_FULL)
  {
     printf("Queue is full,please delete some elements!!!\n");
  }
  else{
    printf("Error happened !!!\n");
  }
    
printf("----------------------------------------------------------\n");
Queuecount(queue1,&size);
printf("size of queue = %i\n",size);
outdata=QueueFront(queue1,&status);
printf("Front of the Queue = %i\n",*(uint32 *)outdata);
outdata=QueueRear(queue1,&status);
printf("Rear of the Queue = %i\n",*(uint32 *)outdata);
printf("----------------------------------------------------------\n");
outdata=Dequeue(queue1,&status);
printf(" Element %i has been removed\n",*(uint32 *)outdata);
outdata=Dequeue(queue1,&status);
printf(" Element %i has been removed\n",*(uint32 *)outdata);
printf("----------------------------------------------------------\n");
Queuecount(queue1,&size);
printf("size of queue = %i\n",size);
outdata=QueueFront(queue1,&status);
printf("Front of the Queue = %i\n",*(uint32 *)outdata);
outdata=QueueRear(queue1,&status);
printf("Rear of the Queue = %i\n",*(uint32 *)outdata);
printf("----------------------------------------------------------\n");
status=Enqueue(queue1,&var6);
  if (status == QUEUE_OK)
  {
     printf("Elemente %i entered queue Successfully.\n",var6);
  }
  else if (status == QUEUE_FULL)
  {
     printf("Queue is full,please delete some elements!!!\n");
  }
  else{
    printf("Error happened !!!\n");
  }
  printf("----------------------------------------------------------\n");
  Queuecount(queue1,&size);
  printf("size of queue = %i\n",size);
outdata=QueueFront(queue1,&status);
printf("Front of the Queue = %i\n",*(uint32 *)outdata);
outdata=QueueRear(queue1,&status);
printf("Rear of the Queue = %i\n",*(uint32 *)outdata);
printf("----------------------------------------------------------\n");
status=Enqueue(queue1,&var1);
  if (status == QUEUE_OK)
  {
     printf("Elemente %i entered queue Successfully.\n",var1);
  }
  else if (status == QUEUE_FULL)
  {
     printf("Queue is full,please delete some elements!!!\n");
  }
  else{
    printf("Error happened !!!\n");
  }
  printf("----------------------------------------------------------\n");
  outdata=Dequeue(queue1,&status);
printf(" Element %i has been removed\n",*(uint32 *)outdata);
outdata=Dequeue(queue1,&status);
printf(" Element %i has been removed\n",*(uint32 *)outdata);
printf("----------------------------------------------------------\n");
status=Enqueue(queue1,&var2);
  if (status == QUEUE_OK)
  {
     printf("Elemente %i entered queue Successfully.\n",var2);
  }
  else if (status == QUEUE_FULL)
  {
     printf("Queue is full,please delete some elements!!!\n");
  }
  else{
    printf("Error happened !!!\n");
  }
  printf("----------------------------------------------------------\n");
   Queuecount(queue1,&size);
  printf("size of queue = %i\n",size);
outdata=QueueFront(queue1,&status);
printf("Front of the Queue = %i\n",*(uint32 *)outdata);
outdata=QueueRear(queue1,&status);
printf("Rear of the Queue = %i\n",*(uint32 *)outdata);
printf("----------------------------------------------------------\n");
destroyqueue(queue1,&status);
if (status == QUEUE_OK)
  {
    printf("The queue has been deleted.\n");
  }
  else{
    printf("Error happened !!!\n");
}
    return 0;
}