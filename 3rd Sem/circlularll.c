#include<stdio.h>
#include<stdlib.h>
 
struct Node{

    int data;
    struct Node* next;
    struct Node* prev;
};
void insertbeg(struct Node** dick, struct Node** last, int data){
    struct Node* new=NULL;
    new=(struct Node*)malloc(sizeof(struct Node));
    new->next=*dick;
    new->data=data;
    new->prev=*last;
    (*last)->next=new;
    *dick=new;

}

void insertpos(struct Node** head, int pos, int data, struct Node** last){
    struct Node* new=NULL;
    new=(struct Node*)malloc(sizeof(struct Node));\
    new->data=data;
    struct Node* current=*head;
     int n=1;

    while(n!=pos){
        current=current->next;
        n++;

    }
    if(n==1){
        insertbeg(head, last, data);
        exit(1);
    }
    new->next=current;
    new->prev=current->prev;
    current->prev->next=new;


}

void delete(struct Node** last, struct Node** head){
    (*last)->prev->next=head;
    (*head)->prev=(*last)->prev;
    

}

int main(){

    struct Node* head=NULL;
    struct Node* second=NULL;
    struct Node* third=NULL;

    head=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));

    head->data=1;
    head->next=second;
    head->prev=third;

    second->data=2;
    second->next=third;
    second->prev=head;

    third->data=3;
    third->next=head;
    third->prev=second;

    // insertbeg(&head, &third, 10);
    insertpos(&head, 1, 10 , &third);
    struct Node* current=head;
    int count=0;
    // while(count<3){
    //     printf("element: %d\n", current->data);
    //     current=current->next;
    //     count++;

        
    // }
    
    do{
        printf("element: %d\n", current->data);
        current=current->next;

    }while(current!=head);







}