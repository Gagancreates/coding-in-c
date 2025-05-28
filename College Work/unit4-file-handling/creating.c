// #include<stdio.h>
// int main()
// {
//     FILE *fp1=fopen("data.txt", "r");
//     FILE *fp2=fopen("new.txt", "w");
//     if(fp1==NULL || fp2==NULL){
//         printf("couldnt access the files");
//     }
//     else{
//         char ch[100];
        
//         while((fgets(ch, 2, fp1))!=NULL){
//             fputs(ch, fp2);

//         }
//         fclose(fp1);
//         fclose(fp2);
//     }
// }

//using formatting I/O functions when you know the data formatting in the file

// #include<stdio.h>
// int main()
// {
//     FILE *fp1=fopen("data.txt", "r");
   
//     if(fp1==NULL){
//         printf("couldnt access the files");
//     }
//     else{
//         int a;        
//         fscanf(fp1, "%d", &a);
//         fprintf(stdout, "%d", a);
//         fclose(fp1);
//     }
// }



// Reading a set of integers from a file called numbers.txt and writing the sum of these integers to a new file. 

// #include<stdio.h>
// void read(int *a, int n, FILE *fp){
//     int i;
//     for(i=0; i<n; i++){
//         fscanf(fp, "%d", a+i);
//     }
// }
// int find_sum( int *a, int n){
//     int sum=0;
//     for(int i=0; i<n;i++){
//         sum+=*(a+i);
//     }
//     return sum;
// }
// int main()
// {
//     FILE *fp1=fopen("numbers.txt", "r");
//     FILE *fp2=fopen("sum.txt", "w");
//     if(fp1==NULL || fp2==NULL){
//         printf("couldnt access the files");
//     }
//     else{
//         int a[100];
//         int n=5;   
//         read(a, n, fp1);     
//         int sum = find_sum(a, n);
//         fprintf(fp2,"sum is %d",sum); 
//         fclose(fp1); 
//         fclose(fp2); 
//     }
// }




//not specifying about the number of integers 
// #include<stdio.h>
// int read(int *a, FILE *fp){
//     int i=0;
//     while((fscanf(fp, "%d", a+i ))!=EOF){
//    i++;
//     }
//     return i;
// }
// int find_sum( int *a, int n){
//     int sum=0;
//     for(int i=0; i<n;i++){
//         sum+=*(a+i);
//     }
//     return sum;
// }
// int main()
// {
//     FILE *fp1=fopen("numbers.txt", "r");
//     FILE *fp2=fopen("sum.txt", "w");
//     if(fp1==NULL || fp2==NULL){
//         printf("couldnt access the files");
//     }
//     else{
//         int a[100];
          
//         int i=read(a, fp1);     
//         int sum = find_sum(a, i);
//         fprintf(fp2,"sum is %d",sum); 
//         fclose(fp1); 
//         fclose(fp2); 
//     }
// }



// using fread and fwrite to read and write binary data
// #include<stdio.h>
// #include<stdlib.h>
// struct Employee{
//     char name[100];
//     int age;
// }emp;

// int main()
// {
//     FILE *fp1=fopen("binary.txt", "w");
    
//     if(fp1==NULL){
//         printf("couldnt access the files");
//     }
//     char ch;
  
//     do{
//         printf("enter the name: ");
//         scanf("%s", emp.name);
//         printf("enter the age: ");
//         scanf("%d", &emp.age);
//         fwrite(&emp, sizeof(emp), 1, fp1);
        
//         printf("wanna add more (y/n)");
//         fflush(stdin);
//         ch=getchar();
       
//     }while(ch=='y' || ch=='Y');
//     fclose(fp1);
//     fp1=fopen("binary.txt", "r");
    
//     while(fread(&emp, sizeof(emp), 1, fp1)>0){
//          printf("\n\t%s\t%d", emp.name,  emp.age);
//     }
// }



//using random access functions: ftell, frewind and fseek

// #include<stdio.h> 
// int main() {
//  FILE *fp = fopen("data.txt","r"); 
//  if(fp == NULL) 
//    printf("cannot open the file"); 
//  else {
//   printf("initially the File pointer is at %d\n", ftell(fp)); // prints 0
//   fseek(fp, 3, SEEK_SET);
//    printf("now the File pointer is at %d\n", ftell(fp)); 
//    fseek(fp, -2, SEEK_END);
//      printf("now the File pointer is at %d from the end\n", ftell(fp)); // prints 0
//     printf("the char is: ");
//     putchar(fgetc(fp));
    
 
//   fclose(fp); 
//  }
//  return 0; 
// }