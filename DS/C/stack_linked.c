// simple stack using linked lists

#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node* next;
} node;

typedef node* Node;

Node HEAD = NULL;
Node TOP = NULL;
int COUNT = 0;

void push(int num){
    COUNT += 1;
    Node new = (Node)malloc(sizeof(node));
    new->data = num;
    new->next = NULL;

    if (HEAD == NULL){
        HEAD = new;
        TOP = new;
        return;
    }

    TOP->next = new;
    TOP = new;
}

void pop(){
    if (HEAD == NULL){
        printf("stack empty\n");
        return;
    }
    printf("popped %d\n", TOP->data);
    // getting top's predecessor node using COUNT
    Node temp = HEAD;
    int i=1;
    for (;i<COUNT-1; i++)
        temp = temp->next;
    TOP = temp;
    TOP->next = NULL;
    
}

void display(){
    if (HEAD == NULL){
        printf("stack empty\n");
        return;
    }
  Node i = HEAD;
  while (i != NULL){
    printf("%d->", i->data);
    i = i->next;
  }
    printf("NULL\n");
}

int main(){

    display();
    push(1);
    push(2);
    push(3);
    push(4);
    display();
    pop();
    display();
}