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



//sum of rows and cols
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
#include<stdio.h>
int main(){
    char a[3]="abc";
    char *p=a;
    printf("%c", *(p+1));
}
