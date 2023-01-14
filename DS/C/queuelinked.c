// implementation of queue using linked list

#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node* next;
} node;

typedef node* Node;

Node F = NULL, R = NULL;

void enqueue(int num){
    Node new = (Node)malloc(sizeof(node));
    new->data = num;
    new->next = NULL;

    // check if queue is empty
    if (F==NULL && R==NULL){
        F = new;
        R = new;
    }
    else{
    R->next = new;
    R = new;
    }
    printf("enqueued %d\n", num);
}

void dequeue(){
    if (F==NULL && R==NULL){
        printf("Queue empty\n");
        return;
    }
    if (F == R){
        printf("dequeued %d\n", F->data);
        F = NULL;
        R = NULL;
        return;
    }
    printf("dequeued %d\n", F->data);
    F = F->next;
}

void display(){
    if (F==NULL && R==NULL){
        printf("Queue empty\n");
        return;
    }
    Node i = F;
    while(i != NULL){
        printf("%d->", i->data);
        i = i->next;
    }
    printf("NULL\n");
}

int main(){
    enqueue(1);
    enqueue(2);
    enqueue(3);
    display();
    dequeue();
    display();
    enqueue(4);
    enqueue(5);
    dequeue();
    dequeue();
    display();
}