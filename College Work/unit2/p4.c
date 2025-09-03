#include<stdio.h>
void f1(); 
static int j=20; // global static variable: cannot be used outside this program file  
int k=23;                          //global variable: can be used anywhere by linking with this file.  
 //By default   has extern with it. 
int main( ) 
{                                          
 f1(); // 0 20 
 f1(); // 0 21 
 f1(); // 0 22 
 return 0; 
} 
void f1() 
{ static int i=0;     printf("%d %d\n",i,j);  i++; j++;      } 