// 1. Given two matrices, write a function to find whether these two are identical.
// 2.Program to find the transpose of a given matrix.
// 3.Program to find the inverse of a given matrix.
// 4.Write a function to check whether the given matrix is identity matrix or not.
// 5. Write a program in C to find sum of right diagonals of a matrix.
// 6. Write a program in C to find sum of rows and columns of a matrix
#include<stdio.h>
int main(){

    int m[2][2]={ 1,2 , 3,4};
    int n[2][2]={ 1, 2, 3, 4};
    int a[2][2]={ 1, 2, 3, 5};
    int k[2][2]={ 1, 2, 3};
    int t=1;
    for( int i=0; i<2; i++){
        for(int j=0; j<2; j++){
        if(m[i][j]!=n[i][j]){
            t=0;
        }
      
    }
    }
    if(t==1){
    printf("The matrices are equal");
    }
    else{
        printf("They are not equal");
    }
}