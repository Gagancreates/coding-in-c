// #include<stdio.h> 
// int main() 
// { 
// printf("enter three sides of a triangle\n"); 
// int a,b,c; 
// scanf("%d%d%d",&a,&b,&c); 
// int count = 0; 
// if(a == b) count++; 
// if(b == c) count++; 
// if(c == a) count++; 
// switch(count){
//     case 0:
//     printf("Scalene");
//     break;
//     case 1:
//     printf("iso");
//     break;
//     case 3:
//     printf("equilateral");
//     break;
//     default:
//     printf("Illalla");
// }
// return 0; 
// } 


//printing all the armstrong numbers between 1-999
// #include<stdio.h> 
// int main() 
// { 
//     printf("printing all the armstrong numbers bw 100-999");
//     // for(int i=100; i<=999; i++){
//         int sum=0;
//         int i=152;
//         int num=152;
        
//         while(i!=0){
        
//         int digit=i%10;
//         sum+=digit*digit*digit;
//         i/=10;
//         }
//         if(num==sum){
//             printf("%d is the one", i);
//         }
//         else{
//             printf("nahh");
//         }
        

//     // }
 

// }


#include <conio.h> 
#include<stdio.h>
int main() { 
char ch;    printf("Press any key: "); 
ch = getch(); 
printf("\nYou pressed: %c\n", ch);   // Does not wait for Enter; captures input immediately. 
return 0; 
}