//Practicing programs based on memory allocation



//1️⃣ Program: Dynamic Array using malloc()
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int n;
//     int *arr;
//     printf("enter the size of the array");
//     scanf("%d", &n);
//     arr=(int*)malloc(n*sizeof(int));
//     if(arr==NULL)
//     {
// printf("could not allocate the memory");
// return 1;
//     }
//     printf("enter the elements of the array");
//     for( int i=0; i<n; i++)
//     {
//         scanf("%d", &arr[i]);

//     }
   
//     for(int i=0; i<n; i++)
//     {
//         printf("[%d]", arr[i]);
//     }

//     free(arr);
//     return 0;
// }



//2️⃣ Program: Initialize Array to 0 using calloc()
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int n, i;
//     int *arr;
//     printf("enter the number of elements of the array");
//     scanf("%d", &n);
//     arr=(int*)calloc(n, sizeof(int));
//     if(arr==NULL)
//     {
//         printf("sorry da cannot allocate the memory");
//         return 1;
//     }
//     for( i=0;i<n; i++)
//     {
//         printf("%d", arr[i]);
//     }
//     printf("enter the desired elements");
//     for(i=0; i<n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     printf("the updated values of the array is");
//     for(i=0; i<n; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//      free(ptr)
//     return 0;
// }




//3️⃣ Program: Resize an Array using realloc()
// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int m, n;
//     int *arr;
//     printf("enter the size of the array");
//     scanf("%d", &n);
//     arr=(int*)malloc(n*sizeof(int));
//     if(arr==NULL)
//     {
// printf("could not allocate the memory");
// return 1;
//     }
//     printf("enter the elements of the array");
//     for( int i=0; i<n; i++)
//     {
//         scanf("%d", &arr[i]);

//     }
   
//     for(int i=0; i<n; i++)
//     {
//         printf("[%d]", arr[i]);
//     }
//     printf("enter the new size of the array");
//     scanf("%d", &m);
//     arr=(int*)realloc(arr, m*sizeof(int));
//     if(m>n)
//     {
//         for(int j=n; j<m; j++)
//         {
//             arr[j]=0;
//         }
//     }
//     printf("after the reallocation");
//     for(int i=0; i<m; i++)
//     {
//         printf("[%d]", arr[i]);
//     }
//     free(arr);
//     return 0;
// }

//creating a structure
// #include<stdio.h>
// #include<stdlib.h>
// struct gagan
// {
//     char *name;         //always use pointers for strings in C or else you can use strcpy()
//     float marks;

// };
// int main()
// {
// struct gagan g1;
// g1.name="gagan";                
// g1.marks=100.40;
// printf("%s , %f", g1.name, g1.marks);
// return 0;
// }



//4️⃣ Program: Student Database using malloc() and realloc()
// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>
// struct student
// {
//     char *name;
//     int roll;
// };
// int main()
// {
//     int n;
//     printf("enter the number of students whose data has to be stored");
//     scanf("%d", &n);
//     struct student *s=(struct student*)malloc(n*sizeof(struct student));
//     if(s==NULL)
//     {
//         printf("could not allocate the memory for the structure");
//         return 1;
//     }
//     for(int i=0; i<n; i++)
//     {
//         printf("enter the details for student %d:\n", i+1);
//         s[i].name=(char *)malloc(50*sizeof(char));
//         if(s[i].name==NULL)
//         {
//             printf("no");
//             return 1;

//         }
//         printf("Enter the name: \n");
//         scanf(" %49[^\n]", s[i].name);
//         printf("Enter the roll :\n");
//         scanf("%d", &s[i].roll);
//         }

//         printf("\nStored Details:\n");
//         for (int i = 0; i < n; i++) {
//             printf("Person %d -> Name: %s, Roll: %d\n", i + 1, s[i].name, s[i].roll);
//             free(s[i].name);
//         }
//         free(s);
//         return 0;
// }




//5️⃣ Program: String Input and Manipulation using malloc()
// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>
// int main()
// {
//     char *name;
//     name=(char*)malloc(50*sizeof(char));
//     printf("Enter a string\n");
//     scanf("%s", name);
//     printf("%s", name);
//     return 0;
// }



//String Reversal (Using malloc):
//Write a program that takes a string input from the user and returns the reversed string using dynamically allocated memory.
// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>
// int main()
// {
//     char *name;
//     name=(char*)malloc(50*sizeof(char));
//     printf("Emter the name");
//     scanf("%s", name);
//     int n=strlen(name);
//     for( int i=n-1;i>=0; i-- )
//     {
//         printf("%c", name[i]);
//     }
    
//     return 0;
// }