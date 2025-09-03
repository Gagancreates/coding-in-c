#include<stdio.h>
 int main()
 {
 int a[][2] = {34,55,11,17,20,60};

printf("%d", *(*(a + 2) + 1));
 return 0;
 }

//  Implement selection sort using an array of structures
// void sort( int **aop, int n){
//     for(int i=0; i<n-1; i++){
//         int pos=i;
//         for(int j=i+1; j<n; j++){
//             if(*aop[pos]>*aop[j]){
//                 pos=j;
//             }
//         }
//         if(pos!=i){
//             int*temp=
//         }
//     }
// }



