// #include<stdio.h>
// int main(){
//     //lets declare a 2 dimesional array
//     int arr[2][3]={1, 2, 3, 4, 5, 6 };
//     for(int i=0; i<2; i++){ 
//         printf("[");
//         for(int j=0; j<3; j++){
          
//             printf("%d ", arr[i][j]);
            
//         }
//         printf("]");
//         printf("\n");
       
//     }
// }


// #include<stdio.h>
// int main(){
//     //small revision on pointers
//     int x=10;
//     int *pointer=&x;
//     printf("%p\n", pointer);
//     printf("%d", *pointer);
    
// }


//pointers for arrays
// #include<stdio.h>
// int main(){
    
//     int arr[2][2]={ 1,5,2, 3};
//     int (*pointer)[2]=arr;
//     for(int i=0; i<2; i++){
//         for(int j=0; j<2; j++){
//             printf("%d", *(*(pointer +i) + j));
//         }
//     }
    
    
// }


// #include<stdio.h>
// int printarr( int *arr, int rows, int col){
//     for(int i=0; i<rows; i++){
//         for(int j=0; j<col; j++){
//             printf("%d ",*(arr + i*col + j));
//         }
//         printf("\n");
//     }

// }
// int main(){
    
//     int arr[2][2]={ 1,5,2, 3};
//     int x=2;
//     int y=2;
//     printarr( (int*)arr, x, y);
    
    
// }



// transpose

//  



//identity matrix
//  #include<stdio.h>
// int checkidentity( int arr[][3], int row, int col){
//     for(int i=0; i<row; i++){
//         for(int j=0; j<col; j++){
//             if(i==j){
//                 if(arr[i][j]!=1){
//                     return 0;
//                 }
//             }
//             if(i!=j){
//                 if(arr[i][j]!=0){
//                     return 0;
//                 }
//             }
//         }
//     } 
//     return 1;
// }
// int main(){

//     int arr[3][3]={1, 0, 2, 0,1,0,0,0,1};
//     if(checkidentity(arr, 3, 3)){
//         printf("the matrix is identity");
//     }
//     else{
//         printf("noo");
//     }
// }

//////////////////////////////////////////////////////
// #include<stdio.h>
// int checkidentity( int *arr, int row, int col){
//     if(row!=col){
//         return 0;
//     }
//     for(int i=0; i<row; i++){
//         for(int j=0; j<col; j++){
//             int value=*(arr +i*col +j);
//             if(i==j && value!=1){ return 0;}
//             if(i!=j && value!=0){ return 0;}

            
//         }
//     } 
//     return 1;
// }
// int main(){

//     int arr[3][3]={1, 0, 0, 0,1,0,0,0,1};
//     if(checkidentity((int*)arr, 3, 3)){
//         printf("the matrix is identity");
//     }
//     else{
//         printf("noo");
//     }
// }



// //sum of rows and cols
// #include<stdio.h>
// int rowsum( int arr[3][3], int row, int col){
//         for(int i=0; i<row; i++){
//             int sum=0;
//         for(int j=0; j<col; j++){
//             sum+=arr[i][j];
//         }
//         printf("The sum of row%d is %d", i+1, sum);
//     }
// };
// int main(){

//     int arr[3][3]={3, 0, 0, 0,1,0,0,0,1};
//     rowsum(arr, 3, 3);  
// }


//using pointers
// #include<stdio.h>
// int main(){
//     char a[3]="abc";
//     char *p=a;
//     printf("%c", *(p+1));
// }



// Program to swap first and last elements of the array of integers using array of pointers 
// and display the array of integers using array of pointers.


////////////////////////////////
// #include<stdio.h>
// void numbers(int n){
//     if(n==0){
//         return;}
//     printf("%d\n", n);
//     numbers(n-1);
//     }
// int main(){
//     int n=10;
//     numbers(n);
// }


// #include<stdio.h>
// int numbers(int n){
//     if(n==0){
//         return 1;}
//     return n * numbers(n-1);
//     }
// int main(){
//     int n=5;
//     int fact=numbers(n);

//     printf("%d", fact);
// }



// #include<stdio.h>
// int add(int n, int m){
//     if(m>n){
//         int temp=m;
//         m=n;
//         n=temp;
//     }
//     if(m==0){
//         return n;
//     }
//     add(n+1, m-1);
//     }

//     int sub(int n, int m){
//         // if(m>n){
//         //     int temp=m;
//         //     m=n;
//         //     n=temp;
           
//         // }
//         if(m==0){
//             return n;
//         }
//         sub(n-1, m-1);
//         }

//         int mult(int n, int m){
//             if(m>n){
//                     int temp=m;
//                     m=n;
//                     n=temp;
                   
//                 }
//             if(m==1){
//                 return n;
//             }
//             return n + mult(n, m-1);
//                 }

// //sum of digits
//             int sum(int n){
//                 if(n==0){
//                     return 0;
//                 }
//                 return n%10 + sum(n/10);
//             }
// int main(){
//     int n=5;
//     int m=3;
//     int x=add(n, m);
//     int y=sub(m, n);
//     int z=mult(m, n);
//     int s=sum(1029);

//     printf("%d\n", x);
//     printf("%d\n", y);
//     printf("%d\n", z);
//     printf("%d", s);

    

// }




// #include<stdio.h>
// int binary(int arr[], int n, int key){
//     int low=0;
//     int high = n-1;
//     while(low<=high){
//         int mid=(low + high)/2;
//         if(arr[mid]==key){
//             return mid;
//         }
//         else if(arr[mid]< key){
//             low=mid+1;
//         }
//         else{
//         high = mid-1;
//     }}
// return -1;
// }
// int main(){
//     int arr[5]={ 1, 2, 3, 4, 5};
//     int n=5;
//     int key=9;
//     printf("%d", binary( arr, n, key));
    
// }



// selection sort

#include<stdio.h>
void selection(int arr[], int n){
    for(int i=0; i<n-1;i++){
        int min=i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[min]){
                min=j;
            }
            int temp=arr[i];
            arr[i]=arr[min];
            arr[min]= temp;
        }
    }
  
    }
    void printArray(int arr[], int n){
        for(int i = 0; i < n; i++){
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    int main(){
        int arr[] = {64, 25, 12, 22, 11};
        int n = sizeof(arr) / sizeof(arr[0]);
    
        printf("Original array: ");
        printArray(arr, n);
    
        selectionsort(arr, n);
    
        printf("Sorted array: ");
        printArray(arr, n);
    
        return 0;
    }