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
#include<stdio.h>
int main(){
    long long int x;
    printf("Please enter a integer");
    scanf("%d", &x);
    int count=1;
    while(x/10<1){
        x=x/10;
        count+=1;
    }
    printf("The size of the integer is %d", count);
}