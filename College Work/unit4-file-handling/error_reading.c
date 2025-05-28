#include <stdio.h> 
#include <errno.h> 
#include<string.h> 
int main (){ 
FILE *fp = fopen ("data.txt", "r");  // File with this name exist 
FILE *fp1 = fopen ("data1.txt", "r");  // File with this name doesn’t exist 
printf("Value of errno: %d\n", errno); 
printf("thoda error hogay hain %s",strerror(errno)); 
return 0; 
} 