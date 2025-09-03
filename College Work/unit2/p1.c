// #include<stdio.h>
// int main(){
//     int a[5]={ [1]=6, [1]=3};
//     for(int i=0; i<5; i++){
//         printf("%d", a[i]);
//     }
// }

//2d arrays in C
// #include<stdio.h>
// int main(){
// int arr[][3] = {{11,22,33},{44,55},{66,77}};     
//     for(int i=0; i<3;i++){
//         printf("[");
//         for(int j=0; j<3; j++){
//             printf("%d ", arr[i][j]);
//         }
//         printf("]");
//     printf("\n");
//     }
// }


// address of a[i][j]= base address + (i*number of cols + j)* sizeof(each_element)


#include<stdio.h>
int main(){
printf("enter the number of rows and cols: ");
int m, n;
scanf("%d %d", &m, &n); 
int arr[m][n];  
    for(int i=0; i<m;i++){
       printf("enter the elements to the row %d:\n", i+1);
        for(int j=0; j<n; j++){
            printf("elemnt %d: ", j+1);
            scanf("%d", &arr[i][j]);
        }
      
 
    }


    for(int i=0; i<m;i++){
        printf("[");
        for(int j=0; j<n; j++){
            printf("%d ", arr[i][j]);
        }
        printf("]");
    printf("\n");
    }
}