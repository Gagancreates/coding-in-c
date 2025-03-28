// #include<stdio.h>
// int main()
// {
//     char name[10];
//     int age;
//     int number;
//     printf("enter your name : ");
//     scanf("%s", name); //%s is format specifier for string

//     printf("enter a number: ");
//     scanf("%d", &number);

//     printf("enter your age: ");
//     scanf("%d", &age); //%d is a format specifier for integers, & (ampersand) is used to get the memory address of the variable
// // %s and %d are format specifiers that act as placeholders that tell printf() and scanf() how to interpret and format the variable.

//     printf("hello %s, you are %d years old and %d", name, age, number);
//     return 0;
// }


//loops
// #include<stdio.h>
// int main()
// {
// for( int i=1; i<=5; i++)
// {
//      printf("%d", i);
//      printf("\n");
// }
// }



#include<stdio.h>
int main()
{
    int i=1;
    while(i<=10)
    {
        printf("%d", i);
        printf("\n");
        i=i+1;
    }
}


//do while loop
// #include<stdio.h>
// int main()
// {
//  int i=1;
//  do{
//     printf("%d", i);
//     i++;
//  }  while(i<=10);
// }



// creating arrays 
// #include<stdio.h>
// int main()
// {
//    int array[]={ 1, 2, 3, 4, 5};
//    for(int i=0; i<5; i++)
//    {
//     printf("%d", array[i]);
//     printf("\n");
//    }
//  return 0;
// }



//functions in c
// #include<stdio.h>
// int add(int a, int b)
// {
//     return a+b;
// }
// int main()
// {
//     printf("%d", add(10, 20));
// }


// #include<stdio.h>
// char greet()
// {
//     printf("Hello there this is c");

// }
// int main()
// {
//     greet();
//     return 0;
// }


// #include<stdio.h>
// int square( int side)
// {
//     return side*side;
// }
// int main()
// {
//     int result=square(5);
//     printf("The area of the square is%d",result );
//     return 0;
// }



// #include<stdio.h>
// void modify(int x){
//     x=20;
// }
// int main()
// {
//     int num=10;
//     modify(num);
//     printf("%d", num);
//     return 0;
// }



// #include<stdio.h>
// void modify(int *x){
//     *x=20;
// }
// int main()
// {
//     int num=10;
//     modify(&num);
//     printf("%d", num);
//     return 0;
// }



//recursive functions
// #include<stdio.h>
// int factorial(int n)
// {
//     if(n==0)
//     return 1;
//     else
//     return n*factorial(n-1);

// }
// int main()
// {
//     printf("factorial is %d", factorial(5));
//     return 0;
// }