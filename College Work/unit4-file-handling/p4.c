#include<stdio.h>
#include<stdlib.h>
void swap(int **lhs, int **rhs) {
    int* temp = *lhs;
    *lhs = *rhs;
    *rhs = temp;   
}


void sort(int **aop, int n){
    for(int i=0; i<n-1; i++){
        int pos=i;
        for(int j=i+1;j<n;j++){
            if(*aop[pos]>*aop[j]){
                pos=j;
            }
        }
        if(pos!=i){
                    swap(&aop[i], &aop[pos]);

        }
    }
}

int main(){
    FILE *fp=fopen("numbers.txt", "r");
    if(fp==NULL){
        printf("sorry");
        exit(1);
    }
    //lets read the number of ints in the file
    int n=0;
    int a;
    while((fscanf(fp, "%d", &a))!=-1){
        n++;
    }
    //allocate the memory for the pointers
    int *p=malloc(n*sizeof(int));
    int **aop=malloc(n*sizeof(int*));
    for(int i=0; i<n;i++){
        aop[i]=&p[i];
    }

    rewind(fp);
    for(int i=0; i<n;i++){
        fscanf(fp, "%d", &p[i]);
    }
    fclose(fp);
     // Display original data
    printf("Original Data:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", p[i]);
    }


    //writing the sorted elements to the new file
    FILE *fp1=fopen("hello.txt", "w");
    if(fp1==NULL){
        printf("sry");
        exit(1);
    }
    for(int i=0; i<n; i++){
        fprintf(fp1, "%d", p[i]);
    }
    fclose(fp1);
    free(p);
    free(aop);

}