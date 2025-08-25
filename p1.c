#include <stdio.h>
#include <stdlib.h>

struct Node {
int val;
struct Node* next;
struct Node* prev;

};
 
int* toArray(struct Node* node, int* returnSize) {
     //write code
     struct Node* curr=node;
     while((curr->prev)!=NULL){
        curr=curr->prev;
     }
     struct Node* head=curr;
     int i=0;
     while(curr!=NULL){
        curr=curr->next;
        i++;
        
     }
     *returnSize=i;
     int* array = (int*)malloc((*returnSize) * sizeof(int));
     int j=0;
     while(head!=NULL){
        
            array[j]=head->val;
            j++;
            head=head->next;
        }
        
     
        return array;


}


//helper and main functions 
struct Node* createNode(int val) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->val = val;
    node->next = NULL;
    node->prev = NULL;
    return node;
}

struct Node* findNodeWithValue(struct Node* head, int targetVal) {
    struct Node* current=head;
    while((current->val)!=targetVal){
        current=current->next;
    }
    return current;

    }

int main() {
    int n, targetVal;
    scanf("%d", &n);

    int* values = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &values[i]);
    }
    
    scanf("%d", &targetVal);
    
    struct Node* head = createNode(values[0]);
    struct Node* current = head;
    
    for (int i = 1; i < n; i++) {
        struct Node* newNode = createNode(values[i]);
        current->next = newNode;
        newNode->prev = current;
        current = newNode;
    }
    
    struct Node* targetNode = findNodeWithValue(head, targetVal);
    
    if (targetNode == NULL) {
        free(values);
        return 0; // print nothing if not found
    }
    
    int returnSize;
    int* result = toArray(targetNode, &returnSize);
    
    for (int i = 0; i < returnSize; i++) {
                printf("%d", result[i]);
        if (i < returnSize - 1) printf(" ");
    }
    printf("\n");
    
    free(values);
    free(result);
    
    current = head;
    while (current != NULL) {
        struct Node* temp = current;
        current = current->next;
        free(temp);
    }
    
    return 0;
}

