// // gets() and puts() for unformatted input output with format specifiers

// #include <stdio.h>
// int main() {
//     char name[10];
//     int x=10;
//     fgets(name, sizeof(name), stdin);
//     puts(name);
//     printf("%4d", x);
//     return 0;
// }


// WAP to count the number of digits in a given integer.
//  ▪ WAP to count the number of digits which are divisible by 2 in a given integer.
//  ▪ WAP to input a floating point number from the user and print the count of digits which are 
// divisible by 3  after the decimal point.
//  ▪ Input 10  characters from the user and check the count of vowels and print same
 
// these are some basic questions, lets do this as fast as possible


//1
// #include<stdio.h>
// int main(){
//     long long int x;
//     printf("Please enter a integer");
//     scanf("%lld", &x);
//     int count=0;
//     while(x!=0){
//         x=x/10;
//         count+=1;
//     }
//     printf("The size of the integer is %d", count);
// }


//2
// #include<stdio.h>
// int main(){
//     int count=0;
//     long long int x;
//     printf("Please enter a integer");
//     scanf("%lld", &x);
    
//     while(x!=0){
//         int l=x%10;
//         if(l%2==0){
//             count+=1;
//         }
//         x=x/10;

//     }
//     printf("the number of digits divisible by 2 is %d", count);
//     }


//3
// #include<stdio.h>
// int main(){
//     int count=0;
//     float x;
//     printf("Please enter a float ");
//     scanf("%f", &x);
//     int y=(int)x;
//     float decimal=x-y;
//     int number=decimal*100000;
//     while(number!=0){
//         int digit=number%10;
//         if(digit%3==0){
//             count+=1;
//         }
//         number=number/10;
        
//     }
//     printf("the number of digits divisible by 3 after the decimal place is %d", count);
//     }

//4
#include<stdio.h>
#include<ctype.h>
int main(){
    char x[10];
    printf("Please enter a 10 chars ");
    scanf("%s", &x);
    int count=0;
    for(int i=0; i<10; i++){
        char ch=tolower(x[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
            count+=1;
        }
    }
    printf("The number of vowels is %d", count);
}
