//1
//factorial of a number
// #include<stdio.h>
// int fact(int n){
//     if(n==1){
//         return 1;
//     }
//     return n*fact(n-1);
// }
// int main(){
//     int n=5;
//     printf("%d", fact(n));
// }


// Separate Recursive functions to reverse a given number and reverse a 
// given string
//  Recursive function to print from 1 to n in reverse order
//  Find the addition, subtraction and multiplication of two numbers using 
// recursion. Write separate recursive functions to perform these.
//  Find all combinations of words formed from Mobile Keypad.
//  Find the given string is palindrome or not using Recursion.
//  Find all permutations of a given string using Recursion

//2
// #include<stdio.h>
// int print(int n){
//     if(n==0){
//      return 0;
//     }
//     printf("%d\n",n);
//     print(n-1);
// }
// int main(){
//     int n=5;
//     print(n);
// }



//3
// #include<stdio.h>
// int add(int n, int m){
//     if(m>n){
//         int temp=n;
//         n=m;
//         m=temp;
//     }
//     if(m==0){
//      return n;
//     }
//     return add(n+1, m-1);
// }
// int subtract(int n, int m){
//     if(m>n){
//         int temp=n;
//         n=m;
//         m=temp;
//     }
//     if(m==0){
//      return n;
//     }
//     return subtract(n-1, m-1);
// }
// int mult(int n, int m){
    
//     if(m>n){
//         int temp=n;
//         n=m;
//         m=temp;
//     }
    
//     if(m==1){
//      return n;
//     }
   
//     return n+ mult(n, m-1);
// }
// int main(){ 
//     int n=5, m=20;
//     printf("%d\n", add(n, m));
//     printf("%d\n", subtract(n, m));
//     int x=n;
//     printf("%d", mult(n, m));
// }



//4
// #include<stdio.h>
// int print(int n){
//     if(n==0){
//      return 0;
//     }
//     printf("%d\n",n);
//     print(n-1);
// }
// int main(){
//     int n=5;
//     print(n);
// }