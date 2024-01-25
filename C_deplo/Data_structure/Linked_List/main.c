#include <stdio.h>
#include <stdlib.h>
#include "Linked_List.h"

NODE *head=NULL;
uint8 selector,len;
int main(){


while(1){
   
   printf("Please,select you operation :\n");
   printf("1-Add element at beginning of the Linked List.\n");
   printf("2-Add element at end of the Linked List.\n");
   printf("3-Add element at specific place in the Linked List.\n");
   printf("4-Delete element from beginning of the Linked List.\n");
   printf("5-Delete element  at specific place in the Linked List.\n");
   printf("6-Display the elements .\n");
   printf("7-Get length of linked list .\n");
   printf("8-Swapping two nodes .\n");
   printf("9-Reversing list .\n");
   printf("10-Sorting list .\n");
   printf("11-Exit programm.\n");
   scanf("%i",&selector);

   switch (selector){

              case 1: Insert_beginning(&head);
                    printf("----------------------------------------------------------------\n");
                      break;
              case 2: Insert_End(head);
                    printf("----------------------------------------------------------------\n");
                      break;
              case 3: Insert_after(head);
                    printf("----------------------------------------------------------------\n");
                      break;
              case 4: Delete_beginning(&head);
                    printf("----------------------------------------------------------------\n");
                      break;
              case 5: Delete(head);
                    printf("----------------------------------------------------------------\n");
                      break;
              case 6: Display(head);
                     printf("----------------------------------------------------------------\n");
                      break;
              case 7: len=Get_len(head);
                      printf("The length of linked list =%i\n",len);
                      printf("----------------------------------------------------------------\n");
                      break;
             case 8: swap(head);
                      printf("----------------------------------------------------------------\n");
                      break;      
             case 9: reverse(&head);
                      printf("----------------------------------------------------------------\n");
                      break;            
             case 10: sort(head);
                      printf("----------------------------------------------------------------\n");
                      break;              
             case 11: exit(1); 
                     break;           
   } 

}


    return 0;
}