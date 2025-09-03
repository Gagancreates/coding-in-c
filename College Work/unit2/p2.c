// pointers in C
// #include<stdio.h>
// int main(){
//      int arr[3]={ 1,2,3};
//      int *p=arr;
//     //  p[1]=100;
//     //  printf("%d\n", arr[1]);
//      printf("address: %p\nvalue: %d\n", p, *p);
//      printf("address of the pointer: %p\n", &p);
//      p++;
//      printf("address: %p\nvalue: %d", p, *p);
// }



// printing the elements of a 3d array using a pointer to the array

// #include<stdio.h>
// int main(){
//     int arr[3][3] = {{11,22,33},{44,55},{66,77}}; 
//     int (*p)[3]=arr;
//     for(int i=0; i<3;i++){
//         *(p+3);
//         printf("[");
//         for(int j=0; j<3; j++){
//             printf("%d ", *(*(p+i)+j) );
//         }
//         printf("]");
//         printf("\n");
//     }    

// }



//array of pointers
#include<stdio.h> 
int main() 
{  
int a[5] = {12,33,45,66,17}; 
printf("Using original array\n"); 
for(int i = 0;i<5;i++) 
{ 
printf("%d ",a[i]);           
} 
printf("\n"); 
int *p[5]; 
for(int i = 0;i<5;i++) 
{       
p[i] = &a[i];     
}
printf("using array of pointers\n");
int **pointer_to_p=p;
for(int i = 0;i<5;i++) 
{         
 
// printf("%d ",*(*(pointer_to_p+ i))); 
//printf("%d", *p[i]);
printf("%d ", *(*(p+i)) );
} 
printf("\n"); 
return 0; 
}



