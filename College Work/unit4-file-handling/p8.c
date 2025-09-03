// sorting
#include<stdio.h>
#include<stdlib.h>
void swap( int **a, int **b){
    int *temp=*a;
    *a=*b;
    *b=temp;
}

void sort( int **aop, int n){
    for(int i=0; i<n-1; i++){
        int pos=i;
        for( int j=i+1; j<n; j++){
            if(*aop[pos]>*aop[j]){
                pos=j;
            }
        
        }
        if(pos!=i){
                swap(&aop[pos], &aop[i]);
            }
    }
}
int main(){
    FILE *fp=fopen("numbers.txt", "r");
    if(fp==NULL){
        printf("nahh");
    }
    else{
            int a;
            int n=0;
            while((fscanf(fp, "%d", &a))!=-1){
                n++;
            }
            int *p=malloc(n*sizeof(int));
            int **aop=(int**)malloc(n*sizeof(int*));

            for( int i=0; i<n; i++){
                    aop[i]=&p[i];
            }
            rewind(fp);
            int i=0;
            while((fscanf(fp, "%d", &p[i]))!=-1){
                i++;
            }
            printf("before sorting:\n");
            for( int j=0; j<n; j++){
                printf("%d ", p[j]);
            }
            sort(aop, n);
            printf("after sorting:\n");
            for( int j=0; j<n; j++){
                printf("%d ", **(aop+j));
            }

    }

}