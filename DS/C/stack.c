// Implementation of simple stack in C using arrays

/* 
- Stacks are based on the LIFO principle, i.e., the element inserted at the last, is the first element to come out of the list.

- Insertion and deletion in stacks takes place only from one end of the list called the top.

- Insert operation is called PUSH operation

- Delete operation is called POP operation.

- In stacks we maintain only one pointer to access the list, called the top, which always points to the last element present in the list.
*/



#include <stdio.h>
#define SIZE 10

// making stack (list) and the pointer (TOP)
int STACK[SIZE], TOP = -1;

void push(int num){
    // check if stack is full
    if (TOP == SIZE-1)
        printf("stack is full\n");
    else{
        TOP++;
        STACK[TOP] = num;
        printf("pushed %d into stack\n", num);
    }
}

void pop(){
    // check if stack is empty
    if (TOP == -1)
        printf("stack if empty\n");
    else{
        printf("popped %d from stack\n", STACK[TOP--]);
        // NOTE: it doesn't actually delete the element but changes the pointer
        // if we push, it simply gets overwritten
    }
}

void disp(){
    int i = TOP;
    printf("....\n");
    if (i == -1)
        printf("stack is empty");
    else
        for (; i >= 0; i--)
            printf("[%d]\n", STACK[i]);
    printf("....\n\n");

}

int main(){
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);
    disp();
    pop();
    pop();
    pop();
    disp();
}
