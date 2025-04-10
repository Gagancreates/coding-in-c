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



#include<stdio.h>
int add(int n, int m){
    if(m>n){
        int temp=m;
        m=n;
        n=temp;
    }
    if(m==0){
        return n;
    }
    add(n+1, m-1);
    }

    int sub(int n, int m){
        // if(m>n){
        //     int temp=m;
        //     m=n;
        //     n=temp;
           
        // }
        if(m==0){
            return n;
        }
        sub(n-1, m-1);
        }

        int mult(int n, int m){
            if(m>n){
                    int temp=m;
                    m=n;
                    n=temp;
                   
                }
            if(m==1){
                return n;
            }
            return n + mult(n, m-1);
                }

//sum of digits
            int sum(int n){
                if(n==0){
                    return 0;
                }
                return n%10 + sum(n/10);
            }
int main(){
    int n=5;
    int m=3;
    int x=add(n, m);
    int y=sub(m, n);
    int z=mult(m, n);
    int s=sum(1029);

    printf("%d\n", x);
    printf("%d\n", y);
    printf("%d\n", z);
    printf("%d", s);

    

}


