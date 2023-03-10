//Owner: Kumar Ankit
#include<stdio.h>
#include<stdlib.h>
#define MAX 20

typedef struct{
    int data[MAX];
    int top;
    int last;
}STACK;

STACK S1;

int push(STACK *S, int v, int opt){
    if(opt == 0){
    if(S->top == MAX-1 || S->top == S->last-1){
        printf("Overflow\n");
        return 1;
    }
    S->top++;
    S->data[S->top] = v;
    return 0;
    }
    if(S->last == 0 || S->last == S->top+1){
        printf("Overflow\n");
        return 1;
    }
    S->last--;
    S->data[S->last] = v;
}


int pop(STACK *S, int *v, int opt){
    if(opt == 0){
    if(S->top == -1){
        printf("Underflow\n");
        return 1;
    }
    *v = S->data[S->top];
    S->top--;
    return 0;
    }
    if(S->last == MAX){
        printf("Underflow\n");
        return 1;
    }
    *v = S->data[S->last];
    S->last++;
}

int main(){
    S1.top = -1;
    S1.last = MAX;
    printf("Entering 15 from forward\n");
    push(&S1, 15, 0);
    printf("Entering 20 from backward\n");
    push(&S1, 20, 1);
    int m;
    pop(&S1, &m, 0);
    printf("Popped element is %d", m);
    return 0;
}