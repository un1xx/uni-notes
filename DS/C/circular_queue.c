// Implementing circular queue using array in C

#include <stdio.h>
#define SIZE 10

int QUEUE[10], F=-1, R=-1;

int isFull(){
    if ((F == R+1) || (F == 0 && R == SIZE-1))
    return 1;
return 0;
}

int isEmpty(){
    if (F==-1)
        return 1;
    return 0;
}

void enqueue(int num){
    if (isFull()){
        printf("queue is full\n");
        return;
    }
    if (isEmpty()){
        F=0;
        R=0;
        QUEUE[R] = num;
        printf("enqueued %d\n", num);
        return;
    }
    R = (R+1)%SIZE;
    QUEUE[R] = num;
    printf("enqueued %d\n", num);
}

void dequeue(){
    if (isEmpty()){
        printf("Queue empty\n");
        return;
    }
    if (F==R){
        printf("dequeued %d\n", QUEUE[F]);
        F = -1;
        R = -1;
        return;
    }
    printf("dequeued %d\n", QUEUE[F]);
    F = (F+1)%SIZE;
}

void display(){
    if (isEmpty()){
        printf("Queue empty\n");
    }
    int i=F;
    printf("[ ");
    for (; i!=R; i = (i+1)%SIZE)
        printf("%d ", QUEUE[i]);
    printf("%d ]\n", QUEUE[i]);
}

int main(){
    enqueue(1);
    enqueue(2);
    enqueue(3);
    display();
    dequeue();
    dequeue();
    enqueue(4);
    display();
}