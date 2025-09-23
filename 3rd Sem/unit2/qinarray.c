#include<stdio.h>
#include<stdlib.h>
#define SIZE 5

struct qq{
    int items[SIZE];
    int front, rear;
};

// init the queue
void init( struct qq* q){
    q->front=-1;
    q->rear=-1;
}

int isFull(struct qq* q){
    return q->rear==SIZE-1;
}

int isEmpty(struct qq* q){
    return q->front==-1 || q->front>q->rear;
}

void enqueue(struct qq* q, int value){
    if(isFull(q)){
        printf("the queue is full, cannot push any element");
        return;
    }
    if(q->front==-1){
        q->front=0;
    }
    q->items[++(q->rear)]=value;
    printf("added value: %d\n", value);
}

int dequeue(struct qq* q){
    if(isEmpty(q)){
        printf("Cannot remove any further elements");
    }
    int x=q->items[q->front];
    q->front++;
    return x;

}

void peak(struct qq* q){
    printf("the latest element is: %d\n", q->items[q->rear]);
}

void display(struct qq* q){
    printf("elements of the queue:\n");
    int i=q->front;
    while((i)<=(q->rear)){
        
        printf("%d ", q->items[i]);
        i++;
    }
}
int main(){

    struct qq q;
    init(&q);
    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);
    peak(&q);
    display(&q);

    printf("\nDequeued: %d\n", dequeue(&q));
    display(&q);


}