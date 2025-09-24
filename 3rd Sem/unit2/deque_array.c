#include<stdio.h>
#include<stdlib.h>
#define SIZE 5

struct qu{
    int items[SIZE];
    int front, rear;

};
 
void init(struct qu* q){
    q->front=q->rear=-1;

}

int isEmpty(struct qu* q){
    return q->front==-1;
}

int isFull(struct qu* q){
    return (q->front==0 && q->rear==SIZE-1) || (q->front==q->rear+1);
}


void enq(struct qu* q, int value){
    if(full)

    if(empty){
        q->front=q->rear=0;
        q->items[q->rear]=value;
    }
    q->rear++;
    q->items[q->rear]=value;
}

void insert front(){

    if( full){


    }
    if(q->front=)
}
