#include<stdio.h>
#include<stdlib.h>
#define MAX 5


struct stack{
    int top;
    int arr[MAX];
};

void init(struct stack* s){
    (s->top)=-1;  // empty
}

int isEmpty(struct stack* s){
    return (s->top)==-1;
}

int isFull(struct stack* s){
    return (s->top)==MAX-1;
}

void push(struct stack* s, int a){
    if(isFull(s)){
        printf("sorry the stack is full\n");
    }
    else{
        s->arr[++(s->top)]=a;
        printf("pushed the element %d to the stack\n", a);
    }
}

int pop( struct stack* s){
    // doing LIFO
    if(isEmpty(s)){
        printf("ALready empty, nothing to pop");
        return -1;

    }
    int popped=s->arr[(s->top)];
    printf("popped element %d\n",popped);
    (s->top)--;
    return popped;



}

struct stack* createStack(){
    struct stack* s=(struct stack*)malloc(sizeof(struct stack));
    return s;


}


int main()
{
struct stack* s=createStack();
init(s);
// push(s, 10);
// push(s, 20);
// push(s, 30);
pop(s);

// push(s, 40);
// push(s, 50);
// push(s, 60);



int n=s->top;
printf("Printing the elements of the stack: \n");
for( int i=0; i<=(s->top); i++ ){
    printf("%d\n", s->arr[i]);

}




}