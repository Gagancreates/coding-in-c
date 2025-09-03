#include<stdio.h> 
#include<stdlib.h>

struct Node{
    int data ;struct Node* prev ; struct Node* next ;   
} ;
 struct Node* createstruct(int val){
    struct Node* new = (struct Node*)malloc(sizeof(struct Node)) ; 
    new->data = val ; 
    new->prev = NULL ; 
    new->next = NULL ; 
    return new ; 
};
void insert( struct Node** head , int val){
    struct Node* new = createstruct(val) ; 
    if(*head == NULL){
        *head = new ; 
        return ; 
    }
     struct Node* temp = *head ; 
    while(temp->next != NULL){
        temp = temp->next ; 
    }
    temp->next = new ; 
    new->prev = temp ; 
};
// int main(){
//     struct Node* head = NULL ; 
//     insert(&head , 20) ; 
    
// }
int main(){

    struct Node* head=NULL;
    struct Node* second=NULL;
    struct Node* third=NULL;

    head=(struct Node*)malloc(sizeof(struct Node));
    second=(struct Node*)malloc(sizeof(struct Node));
    third=(struct Node*)malloc(sizeof(struct Node));

    head->data=1;
    head->next=second;
    head->prev=NULL;

    second->data=2;
    second->next=third;
    second->prev=head;

    third->data=3;
    third->next=NULL;
    third->prev=second;

    struct Node* current=head;
    int count=0;
    // while(count<3){
    //     printf("element: %d\n", current->data);
    //     current=current->next;
    //     count++;

        
    // }
    
    // do{
    //     printf("element: %d\n", current->data);
    //     current=current->next;

    // }while(current!=head);
p






}