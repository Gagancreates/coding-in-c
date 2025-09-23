#include<stdio.h>
#include<stdlib.h>
#define SIZE 5

struct qu{
    int items[SIZE];
    int front, rear;
};

void init(struct qu* q){
    q->front=-1;
    q->rear=-1;
}

int isFull(struct qu* q){
    return (q->rear+1)%SIZE==q->front;
}

int isEmpty(struct qu* q){
    return q->front==-1;
}

void enq( struct qu* q, int value){
    if(isFull(q)){
        printf("nahh cannot insert");
    }
    if(q->front==-1){
        q->front=0;
    }
    q->rear=(q->rear+1)%SIZE;
    q->items[q->rear]=value;
}

int deq(struct qu* q){
    if(isEmpty(q)){
        printf("cannot remove");
        return -1;
    }
    int x=q->items[q->front];
    if(q->front==q->rear){
        q->front=q->rear=-1;
    }
    else{
        q->front=(q->front+1)%SIZE;
    }
    return x;
}

void display(struct qu* q){
    if (isEmpty(q)) {
        printf("Queue is empty..\n");
        return;
    }
     printf("Queue elements: ");
    int i = q->front;
    while (1) {
        printf("%d ", q->items[i]);
        if (i == q->rear) break;
        i = (i + 1) % SIZE;
    }
    printf("\n");
}
int main()
{

struct qu q;
    init(&q);

    // Test enqueue
    enq(&q, 10);
    enq(&q, 20);
    enq(&q, 30);
    enq(&q, 40);
    enq(&q, 50); // queue full now

    display(&q);

    // Test dequeue
    printf("Dequeued: %d\n", deq(&q));
    printf("Dequeued: %d\n", deq(&q));

    display(&q);

    // Enqueue after dequeue to test wrap-around
    enq(&q, 60);
    enq(&q, 70); // wraps around

    display(&q);
}