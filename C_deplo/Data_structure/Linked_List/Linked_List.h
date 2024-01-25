#ifndef _LINKED_LIST_H
#define _LINKED_LIST_H
#include <stdio.h>
#include <stdlib.h>
#include "Standredtypes.h"
/****************************************************************************************/
/* This part depend on the project itself.
I use it to define the return status to each function. */
typedef  enum status {  
    LIST_NOK, 
    LIST_OK,   
    LIST_NULL_PIONTER
} LIST_STATUS;
/*******************************************************************************************/
typedef struct {
void *node_data;  // pionter to data place in the node
struct NODE *node_link;   // pionter to the next node 
}NODE;
/*****************************************************************************************
 * @brief adding node at beginning of list
 * @param head pionter to the head of list
 * @retval None
*/
void Insert_beginning(NODE**head);
/*****************************************************************************************
 * @brief adding node at end of list
 * @param head pionter to the head of list
 * @retval None
*/
void Insert_End(NODE*head);
/*****************************************************************************************
  * @brief adding node at specific place in list
 * @param head pionter to the head of list
 * @retval None
*/
void Insert_after(NODE*head);
/*****************************************************************************************
 * @brief  determine length of linked list
 * @param head pionter to the head of list
 * @retval length of linked list
*/
uint16 Get_len(NODE*head);
/*****************************************************************************************
 * @brief  delete node from beginning of list
 * @param head  pionter to the head
 * @retval None
*/
void Delete_beginning(NODE**head);
/*****************************************************************************************
 * @brief  show all elements in list 
 * @param head pionter to head of the list
 * @retval None
*/
void Display(NODE *head);
/*****************************************************************************************
 * @brief  delete node from anywhere in the  list
 * @param head  pionter to the head
 * @retval None
*/
void Delete(NODE*head);
/*****************************************************************************************
 * @brief  swap two nodes
 * @param head  pionter to the head
 * @retval None
*/
void swap(NODE*head);
/*****************************************************************************************
 * @brief  reverse linked list
 * @param head  pionter to the head
 * @retval None
*/
void reverse(NODE**head);
/*****************************************************************************************
 * @brief  sorting linked list
 * @param head  pionter to the head
 * @retval None
*/
void sort(NODE*head);
#endif