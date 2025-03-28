//creating pointers in c
//what ar pointers 
//pointer are those variables which point to the address of another variable using which we can point to that variable
// #include<stdio.h>
// int main()
// {
//     int n=10;
//     int *pointer=&n;
//     printf("The value of integer n is %d", n);
//     printf("THe address of integer n is %p", &n); //%p is used to print the address of the variable
//     printf("The address stored by pointer is %p", pointer);
//     printf("The value pointed by the poiner is %d", *pointer);// *pointer Access the value at the memory location stored in ptr and the printf function interprets as an integer
//     return 0;

// }


//1️⃣ Program: Swapping Two Numbers Using Pointers
// #include<stdio.h>
// void swap(int *a, int *b)
// {
//  int temp=*a;
//  *a=*b;
//  *b=temp;
// }
// int main()
// {
//     int x=10;
//     int y=100;
//     printf("The numbers before swapping are %d and %d\n", x, y);
//     swap(&x, &y);
//     printf("The numbers after swapping are %d and %d", x, y);
//     return 0;
// }



//2️⃣ Program: Reverse an Array Using Pointers
// #include<stdio.h>
// void reverse(int *arr, int size)
// {
//     int *start=arr;
//     int *end=arr+size-1;

//     while(start<end)
//     {
//         int temp=*start;
//         *start=*end;
//         *end= temp;
//         start++;
//         end--;

//     }
// }
// int main()
// {
//     int arr[]={ 0, 1, 2, 3, 4};
//     int size=sizeof(arr)/sizeof(arr[0]);
//     reverse(arr, size);
//     for( int i=0; i<size; i++)
//     {
//         printf("%d\n", arr[i]);

//     }
//     return 0;

// }



//reversing even number of elements
// #include<stdio.h>
// void reverse(int *arr, int size)
// {
//     int *start=arr;
//     int *end=arr+size-1;
//     while(start<end)
//     {
//         int temp=*start;
//         *start=*end;
//         *end=temp;
//         start++;
//         end--;

//     }   
// }
//     int main()
//     {
//         int arr[]={ 1,2, 3,4, 5, 6};
//         int size=sizeof(arr)/sizeof(arr[0]);
//         reverse(arr, size);
//         for( int i=0; i<size; i++)
//         {
//             printf("%d", i);

//         }
//             return 0;
//     }
  
