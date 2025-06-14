// #include<stdio.h>
// int main(){
// FILE *fp=fopen("hello.txt", "r");
// FILE *fp1=fopen("open.txt", "w");
// // if(fp==NULL){
// //     printf("cannot be accessed ");

// // }
// // else{
// //     char ch;
// //     while((ch=fgetc(fp))!=EOF){
// //         fputc(ch, stdout);
// //         // or printf("%c",ch); 
// //     }
// //     fclose(fp);
// // }
// char ch[100];
// if(fp==NULL && fp1==NULL){
//     printf("nooo");
// }
// else{

//     while(fgets(ch, 500, fp)!=NULL){
//         fputs(ch, fp1);
//     }
//     int a;
//     fscanf(fp, "%d",&a);
//     fprintf(stdout,"%d", a);
    
// }
// fclose(fp);
//     fclose(fp1);
// }



#include<stdio.h>
int read(int *a, int n, FILE *fp){
    int i=0;
    while(fscanf(fp, "%d", a+i)!=EOF){
        i++;
    }
    return i;
}
int sum(int *a, int n){
    int sum=0;
    for(int i=0; i<n;i++){
        sum =sum +*(a+i);
    }
    return sum;
}
int main(){
    int n=5;
    int a[100];
    FILE *fp1=fopen("num.txt", "r");
    FILE *fp2=fopen("open.txt", "w");
    read(a, n, fp1);
    int s=sum(a, n);
    fprintf(fp2, "sum is %d", s);
    fclose(fp1);
    fclose(fp2);
}