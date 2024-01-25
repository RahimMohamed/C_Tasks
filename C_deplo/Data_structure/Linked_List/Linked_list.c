#include "Linked_List.h"


void Insert_beginning(NODE**head){

NODE *NewNode=NULL;


   NewNode=(NODE *)malloc(sizeof(NODE));
   if(NewNode != NULL){
     
     printf("Enter your data : ");
     scanf("%i",&NewNode->node_data);
     
     if(*head == NULL){  // list is empty
      NewNode->node_link=NULL;
      *head=NewNode;
     }
     else{ // list is not empty
        NewNode->node_link=*head;
        *head=NewNode;
     }
      
      printf("Node allocated successfully.\n");
   }
   else{
    printf("Failed Node allocated !!!\n");
   }


}

/**************************************************************************/

void Display(NODE * head){

NODE *Nodecounter=head;

while (Nodecounter->node_link != NULL)
{
    printf("Node Element : %i\n",Nodecounter->node_data);
    Nodecounter=Nodecounter->node_link;
}

 printf("Node Element : %i\n",Nodecounter->node_data);

}

/**************************************************************************/

void Insert_End(NODE*head){
   
   NODE *Nodecounter=head,*NewNode=NULL;
  
while (Nodecounter->node_link != NULL)
{
    Nodecounter=Nodecounter->node_link;
}

NewNode=(NODE *)malloc(sizeof(NODE));
if (NewNode)
{
     printf("Enter your data : ");
     scanf("%i",&NewNode->node_data);
      NewNode->node_link=NULL;
      Nodecounter->node_link=NewNode;
    printf("Node allocated successfully.\n");
}
else{
    printf("Failed Node allocated !!!\n");
   }

}

/**************************************************************************/

void Insert_after(NODE*head){

NODE *Nodecounter=head,*NewNode=NULL;
  uint8 postion=0,len=0;
  printf("Enter number of node you want add after it :\n");
  scanf("%i",&postion);
  len=Get_len(head);
  if (postion > len){
    printf("Error....List is shorter than this postion!!!\n");
  }
  else{
  while(postion != 1)
  {
     Nodecounter=Nodecounter->node_link;
    postion --;
  }
NewNode=(NODE *)malloc(sizeof(NODE));
if (NewNode)
{
     printf("Enter your data : ");
     scanf("%i",&NewNode->node_data);
      if (Nodecounter->node_link == NULL)
      {
        Nodecounter->node_link=NewNode;
        NewNode->node_link=NULL;
      }
      else
      {
        NewNode->node_link=Nodecounter->node_link;
        Nodecounter->node_link=NewNode;
      }
    printf("Node allocated successfully.\n");
}
else{
    printf("Failed Node allocated !!!\n");
   }
  }
}

/**************************************************************************/

uint16 Get_len(NODE*head){
uint16 length =0;
NODE *Nodecounter=head;

while(Nodecounter->node_link != NULL)
 {
 length++;
Nodecounter=Nodecounter->node_link;
 }
length++;
return length;
}

/**************************************************************************/

void Delete_beginning(NODE**head){
NODE *tempNode=*head;

*head=tempNode->node_link;
free(tempNode);
printf("Node deleted succssufuly.\n");
}
/**************************************************************************/
void Delete(NODE*head){

    NODE *tempNode1=head;
     NODE *tempNode2=NULL;
     uint16 len=Get_len(head);
     uint8 postion=0;
  printf("Enter number of node you want to delete it  :\n");
  scanf("%i",&postion);
  len=Get_len(head);
  if (postion > len){
    printf("Error....List is shorter than this postion!!!\n");
  }
  else{
  while(postion != 2)
  {
     tempNode1=tempNode1->node_link;
    postion --;
  }
  tempNode2=tempNode1->node_link;
  if (tempNode2->node_link == NULL)
  {
     tempNode1->node_link=NULL;
     free(tempNode2);
  }
  else{
    tempNode1->node_link=tempNode2->node_link;
    free(tempNode2);
  }
  }
  printf("Node deleted succssufuly.\n");
}
/**************************************************************************/

void swap(NODE*head){

uint32 postion1=0,postion2=0;
NODE *tempnode1=head,*tempnode2=head;
uint32 *temp=NULL;
printf("Enter the first node you want to swap :\n");
scanf("%i", &postion1);
fflush(stdin);
printf("Enter the second node you want to swap :\n");
scanf("%i",&postion2);
  while(postion1 != 1)
  {
     tempnode1=tempnode1->node_link;
    postion1--;
  }
  while(postion2 != 1)
  {
     tempnode2 = tempnode2->node_link;
    postion2--;
  }

   temp=tempnode1->node_data;
   tempnode1->node_data = tempnode2->node_data;
   tempnode2->node_data = temp;

   printf("Swapping done successffuly\n");

}
/**************************************************************************/

void reverse(NODE**head){

NODE *tempnodecurrent=*head,*tempnodenext=NULL,*tempnodeprev=NULL;

while(tempnodecurrent != NULL)
{
    tempnodenext=tempnodecurrent->node_link;
    tempnodecurrent->node_link=tempnodeprev;
    tempnodeprev=tempnodecurrent;
    tempnodecurrent=tempnodenext;
}
*head=tempnodeprev;
printf("Revirsing done  successffuly.\n");
}

/**************************************************************************/

void sort(NODE*head){


NODE *current=head,*next=NULL;
uint32 *temp=NULL;
   while(current != NULL)
   {
    next=current->node_link;
    while (next != NULL){
   if(current->node_data < next->node_data){
    temp=current->node_data;
    current->node_data=next->node_data;
    next->node_data=temp;
   }
    next=next->node_link;
   }
   current=current->node_link;
   }

printf("Sorting done  successffuly.\n");



}
/**************************************************************************/
