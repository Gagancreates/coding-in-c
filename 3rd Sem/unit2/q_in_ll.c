#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

struct qu{
    struct Node *front, *rear;
};

void init(struct qu* q){
    q->front=NULL;
    q->rear=NULL;

}

int isEmpty(struct qu* q){
    return q->front==NULL;
}

void enqueue( struct qu* q, int value){
   struct Node* newnode=(struct Node*)malloc(sizeof(struct Node));
   newnode->data=value;
   newnode->next=NULL;

   if(q->rear==NULL){
    // this means this is the first node to get added to this queue
    q->front=q->rear=newnode;
   }
   else{
   q->rear->next=newnode;
   q->rear=newnode;
   }
   printf("enwqued %d\n", value);
}

int deq(struct qu* q){
    if(isEmpty(q)){
        printf("nahh cannot remove\n");
        return 0;
    }
        int x=(q->front)->data;
        q->front=q->front->next;
        return x;
    }

void display(struct qu* q){
    printf("\nprinting the elements:\n");
    struct Node* temp=q->front;
    while(temp!=NULL){
        printf("%d ", temp->data);
        temp=temp->next;
    }
}
int main(){
    struct qu q;
    init(&q);
    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);
    display(&q);

    deq(&q);
    deq(&q);
    display(&q);


}
