// #include <stdio.h> 
// #include <errno.h> 
// #include<string.h> 
// int main (){ 
// FILE *fp = fopen ("data.txt", "r");  // File with this name exist 
// FILE *fp1 = fopen ("data1.txt", "r");  // File with this name doesn’t exist 
// printf("Value of errno: %d\n", errno); 
// printf("thoda error hogay hain %s",strerror(errno)); 
// return 0; 
// } 



// array of pointers to a file
#include<stdio.h>
#include<stdlib.h>
int search( int **aop,int low, int high, int key ){
    if(low>high){
        return -1;}
    else{
        int mid= (low+high)/2;
        if(*aop[mid]==key){
            return mid;
        }
        else if(key<*aop[mid]){
            return search( aop,low,  mid-1,  key);
        }
        else{
            return search( aop, mid+1, high,  key);

        }
    }
    }
    

int main(){
    FILE *fp=fopen("numbers.txt", "r");
    if(fp==NULL){
        printf("couldnt access the doc");
    
    }
    else{
        int a;
        int n=0;
        while((fscanf(fp, "%d", &a)==1)){
            n++;
        };
       
        int *p= malloc(n*sizeof(int));
        int **aop=(int **)malloc(n*sizeof(int *));
        for( int i=0; i<n; i++){
            aop[i]=&p[i];
        }
        rewind(fp);
        // reading the elements into the pointer p
        int i=0;
        while((fscanf(fp, "%d", &p[i])!=-1)){
            i++;
        }
        fclose(fp);
        int key;
        printf("enter the element to be searched: ");
        scanf("%d", &key);
        if((search(aop, 0, n, key))!=-1){
        
        printf("the element is found at index %d", search(aop, 0, n, key) );
        }
        else{
            printf("couldnt find the element");
        }

    }
    
}
