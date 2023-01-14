// Implementation of simple queue using array in C

/*
    - Insertion and deletion in queues takes place from the opposite ends of the list. 
    The insertion takes place at the rear of the list and the deletion takes place from the front of the list.

    - Insert operation is called enqueue operation.
    
    - Delete operation is called dequeue operation.
    
    - In queues we maintain two pointers to access the list. 
    The front pointer always points to the first element inserted in the list
    and is still present, and the rear pointer always points to the last inserted element.

*/

#include <stdio.h>
#define SIZE 10

int QUEUE[SIZE], F=-1, R=-1;

void enqueue(int num){
    // check if queue is empty
    if (F==-1 && R==-1){
        F = 0;
        R = 0;
        QUEUE[R] = num;
        return;
    }
    // check if queue is full
    if (R==SIZE-1){
        printf("Queue is full\n");
        return;
    }
    QUEUE[++R] = num;
    printf("enqueued %d\n", num);
}

void dequeue(){
    // check if queue is empty
    if (F > R || R==-1){
        printf("queue empty\n");
        return;
    }
    printf("dequeued %d\n", QUEUE[F++]);
}

void display(){
    printf("[");
    int i=F;
    for (; i<=R; i++)
       printf("%d ", QUEUE[i]);
    printf("]\n");
}

int main(){
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    display();
    dequeue();
    dequeue();
    display();
}