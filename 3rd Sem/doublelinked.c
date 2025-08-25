#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* next;
    struct Node* prev;
};

void insertbeg(struct Node** head, int data){
    struct Node* new=(struct Node*)malloc(sizeof(struct Node));
    new->data=data;
    new->next=*head;
    new->prev=NULL;
    (*head)->prev=new;
    *head=new;

}

void insertlast(struct Node** oldlast, int data){
    struct Node* last=(struct Node*)malloc(sizeof(struct Node));
    last->data=data;
    last->next=NULL;
    (*oldlast)->next=last;
    last->prev=*oldlast;
    *oldlast=last;
}

void deletelast(struct Node** oldlast){
    (*oldlast)->prev->next=NULL;
}

void deletebeg(struct Node** head){
    *head=(*head)->next;
    (*head)->prev=NULL;
}

void insertpos(struct Node** head, int data, int pos){
    struct Node* new=(struct Node*)malloc(sizeof(struct Node));
    new->data=data;
    struct Node* cur=*head;

    if(pos==1){
        insertbeg(head, data);
    }

    int i=1;

    while(i<pos-1 && cur!=NULL){
        
        cur=cur->next;
        i++;
    }
    new->data=data;
    new->prev=cur->prev;
    new->next=cur;
    cur=new;
    // cur->next->prev=new;
    // cur->prev->next=new;


}

int main(){

    struct Node* head=NULL;
    struct Node*second=NULL;
    struct Node* third=NULL;

    head=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));

    head->data=1;
    head->prev=NULL;
    head->next=second;

    second->data=2;
    second->prev=head;
    second->next=third;

    third->data=3;
    third->prev=second;
    third->next=NULL;


    
insertbeg(&head, 0);
insertlast(&third, 4);
insertlast(&third, 5);
deletelast(&third);
deletebeg(&head);
insertpos(&head, 10, 1);


// traversing the linked list and printing the elements;
struct Node* current=head;
while(current!=NULL){
    printf("Node: %d\n", current->data);
    current=current->next;

}

//reverse traversal
struct Node* last;
last=head;
if(last!=NULL){
while((last->next)!=NULL){
    last=last->next;

}


while(last!=NULL){
    printf("Node Last: %d\n", last->data);
    last=last->prev;
}

}
//freeing the memory allocated
current=head;
struct Node* next_node;
while(current!=NULL){
    next_node=current->next;
    free(current);
    current=next_node;
}
}