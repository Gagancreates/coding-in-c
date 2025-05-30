#include<stdio.h>
int main(){
    int n;
    printf("enter the number of elements of the array");
    scanf("%d", &n);
    printf("now enter the elements of the array");
    int arr[5];
    for( int i=0; i<n;i++){
        scanf("%d", &arr[i]);
    }    
    printf("The elements of the array are ");
    for( int i=0; i<n; i++){
        printf("%d ", arr[i]);
    }
}