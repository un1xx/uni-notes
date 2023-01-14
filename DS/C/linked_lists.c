/*
    - Its an dynamic array.

    Limitations ->

    - Random access is not allowed. We have to access elements sequentially starting from the first node(head node). 
      So we cannot do a binary search with linked lists efficiently with its default implementation. 
    - Extra memory space for a pointer is required with each element of the list. 
    - Not cache-friendly. Since array elements are contiguous locations, 
      there is the locality of reference which is not there in the case of linked lists.
    - It takes a lot of time in traversing and changing the pointers.
    - Reverse traversing is not possible in singly linked lists.
    - It will be confusing when we work with pointers.
    - Direct access to an element is not possible in a linked list as in an array by index.
    - Searching for an element is costly and requires O(n) time complexity.
    - Sorting of linked lists is very complex and costly.

    source: https://www.geeksforgeeks.org/what-is-linked-list/ 
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
  int data;
  struct node* next;
} node;


typedef node* Node;

void addNode(Node* head, int num){
  // takes head node and adds a node in the end
  Node new = (Node)malloc(sizeof(node));
  Node last = *head;
  new->data = num;
  new->next = NULL;

  if (*head == NULL){
    *head = new;
    return;
  }
  // get last node
  while (last->next != NULL){
    last = last->next;
  }

  last->next = new;
}

void display(Node* head){
  Node i = *head;
  while (i != NULL){
    printf("%d->", i->data);
    i = i->next;
  }
  printf("NULL\n");
}

int main(){
  // defining a head node
  Node head = NULL;

  addNode(&head, 1);
  addNode(&head, 2);
  addNode(&head, 3);
  display(&head);


}
