#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int data;
    struct Node* prev;
    struct Node* next;
} Node;

typedef struct Deque{
    Node* front;
    Node* rear;
} deque;

deque* createDeque(){
    deque* dq=(deque*)malloc(sizeof(deque));
    dq->front=dq->rear=NULL;
    return dq;
}

void insertFront( deque* dq, int x){

    Node* newnode=(Node*)malloc(sizeof(Node));
    newnode->data=x;
    newnode->prev=NULL;
    newnode->next=dq->front;
    
    if(dq->front==NULL){
        dq->front=dq->rear=newnode;
    }
    else{
        dq->front->prev=newnode;
        dq->front=newnode;
    }
}

void insertRear(deque* dq, int x){

    Node* newnode=(Node*)malloc(sizeof(Node));
    newnode->data=x;
    newnode->next=NULL;
    newnode->prev=dq->rear;

    if((dq->rear)==NULL){
        dq->front=dq->rear=newnode;
        newnode->data=x;
    }
    else{
        dq->rear->next=newnode;
        dq->rear=newnode;
    }
}

void deleteRear(deque* dq){
    if(dq->rear==NULL){
        printf("Nothing to delete my nigga");
    }

    Node* temp=dq->rear;
    printf("Deleted node %d\n", temp->data);

    if(dq->front==dq->rear){
        dq->front=dq->rear=NULL;
    }
    else{
        
        dq->rear=dq->rear->prev;
        dq->rear->next=NULL;

    }
    free(temp);
}

int deleteFront(deque* dq){
    if(dq->front==NULL){
        printf("Nothing to delete my nigga");
    }

    Node* temp=dq->front;
    printf("Deleted node %d\n", temp->data);
    int n=temp->data;

    if(dq->front==dq->rear){
        dq->front=dq->rear=NULL;
    }
    else{
        
        dq->front=dq->front->next;
        dq->front->prev=NULL;

    }
    free(temp);
    return n;
}


int peakFront(deque* dq){

    if(dq->front==NULL){
        printf("Nothing to show my nigga\n");
    }
    else{
        // printf("This is the first element my nigga: %d\n", dq->front->data);
        return dq->front->data;
    }
     
}

int peakRear(deque* dq){
    if(dq->rear==NULL){
        printf("Nothing to show my nigga\n");
    }
    else{
    printf("This is the rear element my nigga: %d\n", dq->rear->data);
    }
    return dq->rear->data;
}

int main()
{
    deque* dq=createDeque();
    insertFront(dq, 10);
    insertFront(dq, 20);
    insertFront(dq, 30);
    insertFront(dq, 40);
    insertFront(dq, 50);
    insertFront(dq, 60);
    insertFront(dq, 70);

    int k=3;

    while(dq->front!=dq->rear){

        for( int i=0; i<k-1; i++){
            int x=deleteFront(dq);
            insertRear(dq, x);
        }
        int elm=deleteFront(dq);
        printf("eliminated: %d\n", elm);
    }

    printf("final element: %d\n", dq->front->data);
}