#include<stdio.h>
#include<string.h> 
#include<stdlib.h>
#include <ctype.h>
int main(){
    // dynamic mem allocation using malloc
    // int n;
    // n=5;
    // int *ptr=(int *)malloc(5* sizeof(int));
    // *ptr=809;
    // printf("%d", *ptr);

    //array using malloc
    // n=5;
    // int *arr=(int *)malloc(5* sizeof(int));
    // printf("enter the array elements");
    // for( int i=0; i<n; i++){
    //     scanf("%d", &arr[i]);
        
    // }
    // printf("the elmentsof the array are:\n");
    // for( int i=0; i<n; i++){
    //     printf("%d", arr[i]);
        
    // }



    // array allocation using calloc
     int n=5;
    int *arr=(int *)calloc(5, sizeof(int));
    printf("enter the array elements");
    for( int i=0; i<n; i++){
        scanf("%d", &arr[i]);
        
    }
    printf("the elmentsof the array are:\n");
    for( int i=0; i<n; i++){
        printf("%d", arr[i]);
        
    }

    arr=realloc(arr, 10*sizeof(int));





    
}