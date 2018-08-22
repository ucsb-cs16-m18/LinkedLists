#include "linkedList.h"
#include "linkedListFuncs.h"


//head: ptr to a Node * which is the head of a linked list
//return sum of all values in linked list using a recursive approach
//if head is null return 0
int recursiveSum(Node * head) {
  //Node* head = list->head;
  if(head != NULL){
    return (head->data+recursiveSum(head->next));
  }//recursion 
  else{
    return 0; 
  } //base case
}

//head: ptr to a Node* which is the head of a linked list
//return the largest value in the linked list using a recursive approach
//you may assume the list has at least one element
int recursiveLargestValue(Node* head) {
  int here = head->data;
  int nextNode;
  if(head->next==NULL){
    return here;
  }//base case
  else{
    nextNode = recursiveLargestValue(head->next);
  } //recursion

  if(here > nextNode){
   return here;
  } //checks to see if current value is greater than previous value. If so, the current value is retained
  else{
    return nextNode;
  }
  return 0;
}
