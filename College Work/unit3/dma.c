#include<stdio.h>
#include<stdlib.h>
int main(){
        // lets revise malloc
        int *p=malloc(5*sizeof(int));
        *p=1;
        printf("%d\n", *p);
        printf("size of malloc: %d\n", sizeof(p));
        free(p);

        // lets revise calloc
        int *a=calloc(5,sizeof(int));
        
        for(int i=0; i<5; i++){
             a[i]=i+1;
        }
        
        
        for(int i=0; i<5; i++){
            printf("%d\n", a[i]);
        }
        

        //realloc 
        a=realloc(a, 10*sizeof(int));     // if pointer=NULL then it acts as malloc, if the size is 0 then it acts as free pointer
        a[9]=10;
        printf("a9: %d", a[8]);
        free(a);


}