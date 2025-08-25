#include<stdio.h>
#include<stdlib.h>
   struct Node{
        int data;
        struct Node* next;
    };
    
int insertstart(struct Node **head, int data){

    struct Node* new=(struct Node*)malloc(sizeof(struct Node));
    new->next=*head;
    new->data=data;

    *head=new;
    

}

int insertlast(struct Node **second, int data){
    struct Node* last=(struct Node*)malloc(sizeof(struct Node));
    last->next= NULL;
    last->data=data;

    (*second)->next=last;

}

int main(){

    struct Node* head=NULL;
    struct Node* first=NULL;
    struct Node* second=NULL;

    head=(struct Node*)malloc(sizeof(struct Node));
    first=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));


    head->data=1;
    head->next=first;

    first->data=2;
    first->next=second;

    second->data=3;
    second->next=NULL;

    insertstart(&head, 0);
    insertlast(&second, 4);

    //traversing the linked list and printing the elements
    struct Node* current=head;
    printf("Printig the linked list:\n");
    int i=1;
    while(current!=NULL){
        printf("Element %d is %d\n", i, current->data);
        current=current->next;
        i++;
    }


    // Free the allocated memory to prevent memory leaks
    struct Node* s=head;
    while(!=NULL){
        struct Node* temp=current->next;
        free(current);
        current=;
    }
    free(head);
    free(first);
    free(second);

}
