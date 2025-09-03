#include<stdio.h>
#include<stdlib.h>
int search( int **aop, int low, int high, int key){
    if(low>high){
        return -1;
    }
    else{
        int mid=(low+high)/2;
        if(*aop[mid]==key){
            return mid;
           
        }
        else if(*aop[mid]>key){
            return search( aop, low, mid-1, key);
        }
        else{
            return search(aop, mid+1, high, key);
        }
    }
}
int main(){
    // recursive binary search using array of pointers
    FILE *fp=fopen("o.txt", "r");
    if(fp==NULL){
        printf("nahh");
    }
    else{
        int a;
        int n=0;
        // find the number of int in the file
        while((fscanf(fp, "%d",&a))!=-1){
            n++;
        }
        // malloc both pointer array and aop
        int *p=malloc(n*sizeof(int));
        int **aop=(int**)malloc(n*sizeof(int*));

        int i=0;
        int b;
       for(int i=0; i<n; i++){
            aop[i]=&p[i];
        }
         rewind(fp);
         int j=0;
         while((fscanf(fp, "%d", &p[j]))!=-1){
            j++;
         }
         fclose(fp);
       
        int m=search(aop, 0, n, 80);
        if(m!=-1){
        printf("found at: %d", m);
        }
        else{
            printf("not found");
        }
        free(p);
        free(aop);
    }
        

}