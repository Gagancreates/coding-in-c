#include<stdio.h>
#include<stdlib.h>
int main(){
   
    int n;
    printf("enter the size of the array: ");
    scanf("%d", &n);
     int *p=(int*)malloc(n*sizeof(int));
    if(p==NULL){
        printf("sry couldnt allocate the memory ");
        exit(1);
    }
    printf("enter the elements: ");
    for(int i=0; i<n; i++){
        scanf("%d", &p[i]);
    }
    printf("elements are: \n");
    for(int i=0; i<n; i++){
        printf("%d", p[i]); // or *(p+i)
    }
    printf("\nenter the new size: ");
    int new;
    scanf("%d", &new);
    p=(int*)realloc(p, new*sizeof(int));
    if(new>n){
        printf("enter %d extra elements to the array: ", new-n);
        for(int i=n; i<new; i++){
        scanf("%d", &p[i]);
    }
    }
    printf("after realloc elements are: \n");
    for(int i=0; i<new; i++){
        printf("%d", p[i]); // or *(p+i)
    }
    free(p);
}