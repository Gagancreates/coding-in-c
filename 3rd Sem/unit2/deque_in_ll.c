#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
    struct Node* prev;
};

struct qu{
    struct Node *front, *rear;
};

void init(struct qu* q){
    q->front=NULL;
    q->rear=NULL;
}

void insertFront( struct qu* q, int value){

    struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
    newnode->data=value;
    newnode->next=q->front;
    newnode->prev=NULL;

    if(q->front==NULL){
        q->rear=newnode;
    }
    else{
        q->front->prev=newnode;
    }
    q->front=newnode;

}

void insertRear(struct qu* q, int value){
    struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
    newnode->data=value;
    newnode->next=NULL;
    newnode->prev=q->rear;
    if(q->front==NULL){
        q->front=newnode;
    }
    else{
        q->rear->next=newnode;
    }
    q->rear=newnode;

}

int deleteFront(struct qu* q){
    struct Node* temp=q->front;
    int x=temp->data;
    // deleting the element from front

    q->front=q->front->next;
    q->front->prev=NULL;
    return x;
}

int deleteRear(struct qu* q){
    struct Node* temp=q->rear;
    int x=temp->data;

    q->rear=q->rear->prev;
    q->rear->next=NULL;
    return x;

}


void display(struct qu* q){
    struct Node* temp=q->front;
    while(temp!=NULL){
        printf("%d ", temp->data);
        temp=temp->next;
    }
}
int main(){
    struct qu q;
    init(&q);
    insertFront(&q, 10);
    insertFront(&q, 20);
    insertFront(&q, 30);
    insertRear(&q, 100);
    insertRear(&q, 110);
    display(&q);
    printf("\n");
    deleteFront(&q);
    deleteFront(&q);
    deleteRear(&q);

    display(&q);


}