// //functions in C
// #include<stdio.h>
// void swap(int *a, int *b) 
// {  
// int temp = *a;  
// *a = *b;  
// *b = temp; 
// }  
// int main() 
// { 
// int a = 100;  
// int b = 200; 
// printf("before call a is %d and b is %d\n", a, b); 
// swap(&a, &b); 
// printf("after call a is %d and b is %d\n", a, b); 
// return 0; 
// } 


// arrays and functions in C
// #include<stdio.h>
// void print(int a[], int m){
//     for( int i=0; i<m;i++){
//         printf("%d", a[i]);
//     }
// }
// void read_pointer(int *p, int n){
//     printf("enter %d elements for the array: \n", n);
//     for(int i=0; i<n; i++){
//         printf("element %d: ", i+1);
//         scanf("%d",p+i);
//         }
// }
// void print_pointer(int *p, int n){
//     for(int i=0; i<n; i++){
//         printf("%d ", *(p+i));
//     }
// }
// int main(){
//     int arr[4];
//     int n=4;
//     read_pointer(arr, n);
//     print_pointer(arr, n);
// }





//reading and displaying a 2d array using func both pass by value and reference
#include<stdio.h>
void read( int col,  int arr[][col], int row){
    for(int i=0; i<row; i++){
        printf("enter ele for row %d\n", i+1);
        for(int j=0; j<col; j++){
        printf("element %d: ", j+1);
        scanf("%d", &arr[i][j]);
        }
    }
}

void read_pointer(int col,  int (*arr)[col], int row){
    for(int i=0; i<row; i++){
        printf("enter ele for row %d\n", i+1);
        for(int j=0; j<col; j++){
        printf("element %d: ", j+1);
        scanf("%d", (*(arr+i)+j));
        }
    }

}

void display_pointer(int col, int (*arr)[col], int row){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
        printf("%d ", *(*(arr+i)+j));
        }
        printf("\n");
    }

}

void display( int col, int arr[][col], int row){
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
        printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

}

int main(){
    int row=3;
    int col=3;
    int arr[3][3];
    // read(col, arr, row);
    // display(col, arr, row);
    read_pointer(col, arr, row);
    display_pointer(col, arr, row);
}





