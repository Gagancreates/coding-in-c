// 1. Given two matrices, write a function to find whether these two are identical.
// 2.Program to find the transpose of a given matrix.
// 3.Program to find the inverse of a given matrix.
// 4.Write a function to check whether the given matrix is identity matrix or not.
// 5. Write a program in C to find sum of right diagonals of a matrix.
// 6. Write a program in C to find sum of rows and columns of a matrix

// 1
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



//2

 #include<stdio.h>
int row=2;
int col=3;
void transpose( int mat[row][col], int trans[col][row]){
    for( int i=0; i<row; i++){
        for( int j=0; j<col; j++){
            trans[j][i]=mat[i][j];
    }
    }

}

int main(){
int mat[2][3]={1 ,2 ,3, 4, 5, 6};
int trans[col][row];
transpose(mat, trans);
for( int i=0; i<col; i++){
    printf("[");
    for( int j=0; j<row; j++){
        printf("%d ", trans[i][j]);
}
printf("]");
printf("\n");
}

}



//4
#include<stdio.h>
int row=3;
int col=3;
int x=1;

int identity( int matrix[row][col]){
    for( int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(i==j){
                if(matrix[i][j]!=1)
                {
                    return x=0;
                }
            }
            if(i!=j){
                if(matrix[i][j]!=0){
                
                        return x=0;
                }
            }
        }
    }
    return x;
 }
int main(){
 int matrix[3][3]={1, 0, 0, 0, 1, 0, 0, 0, 1};
if(identity(matrix)){
    printf("Yes");
}
else{
    printf("No");
}
}



//6
#include<stdio.h>
int main(){
 int matrix[2][3]={1, 3, 0, 9, 1, 4};
int sumc=0;
for( int i=0; i<2; i++){
    int sumr=0;
    for(int j=0; j<3; j++){
    
    sumr+=matrix[i][j];
}
printf("The sum of the row %d is %d\n", i+1 , sumr);
}

for( int i=0; i<3; i++){
    int sumc=0;
    for(int j=0; j<2; j++){
    
    sumc+=matrix[j][i];
}
printf("The sum of the column %d is %d\n", i+1 , sumc);
}
}



