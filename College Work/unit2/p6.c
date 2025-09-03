// // recursion

// // #include<stdio.h>
// // int find_fact(int n){
// //     if(n==1){
// //         return 1;
// //     }
// //     else{
// //         return n* find_fact(n-1);
// //     }
// // }


// // int main(){
// //     //lets write a basic recursion function ofc to find th fact of a number
// //     int a=5;
// //     printf("fact: %d", find_fact(a));
// // }

// // #include<stdio.h> 
// // int what1(int n) 
// // { 
// // if(n==0) return 0; 
// // else return (n%2)+10*what1(n/2); 
// // } 
// // int main() 
// // {  
// // printf("%d",what1(8)); 
// // return 0;      
// // } 



// // binary search using both iterative and recursive approach

// #include<stdio.h>
// int binary_iterative( int arr[], int low, int high, int key){
//     int found=0;
//     int pos=-1;
    
//     while(low<=high){
//         int mid=(low+high)/2;
//         if(arr[mid]==key){
//             return mid;
//         }
//         else if(arr[mid]>key){
//             high=mid-1;
//         }
//         else{
//             low=mid+1;
//         }   
// }
//  return pos;
// }


// int binary_recursive(int arr[], int low, int high, int key){
//     if(low>high){
//         return -1;
//     }
//     else{
//         int mid=(low+high)/2;
//         if(arr[mid]==key){
//             return mid;
            
//         }
//         else if(arr[mid]>key){
//             return binary_recursive(arr, low, mid-1, key);
//         }
//         else{
//             return binary_recursive(arr, mid+1, high, key);
//         }
//     }

// }
// int main(){
//     int a[5]={1, 2, 5,6,10};
//     int n=5;
//     int key=6;
    
//     // int p=binary_iterative(a, 0, n,key);
//     int p=binary_recursive(a, 0, n,key);

//     if(p!=-1){
//         printf("found at %d", p);
    
//     }
//     else{
//         printf("not found");
//     }
// }




//sorting using C
//selection sort
#include<stdio.h>
void sort( int arr[], int n){
    int pos;
    for(int i=0; i<n-1; i++){
        pos=i;
        for(int j=i+1; j<n; j++){
            if(arr[pos]>arr[j]){
                pos=j;
            }
        }
        if(pos!=i){
                int temp=arr[pos];
                arr[pos]=arr[i];
                arr[i]=temp;
            }
    }
}

int main(){
    int a[5]={ 10, 3, 4, 5, 90};  
int n=5; 
 
 
sort(a,n); 
printf("after sorting\n"); 
for(int i=0; i<n ; i++){
    printf("%d ", a[i]);
} 
return 0;
}