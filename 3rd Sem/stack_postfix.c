#include<stdio.h>
#include<ctype.h>
#define MAX 100

typedef struct Stack{
    int items[MAX];
    int top;
}stack;

void stack_init(stack* s){
        s->top=-1;

}

int is_full(stack* s){
    return s->top==MAX-1;
}

int is_empty(stack* s){
    return s->top==-1;
}

void push(stack* s, int x){
    s->items[++(s->top)]=x;
}

int pop(stack* s){
    return s->items[(s->top)--];
}



void postfix(){
    
    int result;

    char in[100];
    printf("enter the postfix expression: ");
    scanf("%s",in);

    stack s;
    stack_init(&s);

    int i=0;
    while(isalpha(in[i])){
        printf("enter the value of %c: ", in[i]);
        int x;
        scanf("%d", &x);
        push(&s, x);
        i++;
        
    }
    
    while(in[i]!='\0'){
        char exp=in[i];
        
            int var1=pop(&s);
            int var2=pop(&s);
        
        
        switch (exp)
        {
        case '+':
            push(&s, var1+var2);
            break;
        case '*':
            push(&s, var1*var2);
            break;
        case '/':
            push(&s, var1/var2);
            break;
        case '-':
            push(&s, var1-var2);
            break;
        default:
            break;
        }
        i++;
    }
    printf("result: %d", pop(&s));

}
int main(){

    postfix();



}
