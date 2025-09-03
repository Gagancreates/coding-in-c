#include<stdio.h>
#include<stdlib.h>
// int main(){

//     FILE *fp=fopen("numbers.txt", "r");
//     FILE *fp1=fopen("lo.txt", "w");
//     char ch[100];
//     if(fp==NULL && fp1==NULL){
//         printf("nahh");
//     }
//     else{
//         // while((ch=fgetc(fp))!=EOF){
//         //     printf("%c", ch);
//         //     // fputc(ch, stdout);
//         while(fgets(ch, 500, fp)!=NULL){
//                 fputs(ch, fp1);
//         }
//         int a;
//         fscanf(fp, "%d", &a);
//         fprintf(stdout, "%d", a);
//             fclose(fp1);
//           fclose(fp);
//     }
  
// }



// reading from numbers.txt and writing the sum to a new file

void read(int *a, int n, FILE *fp){
    for( int i=0; i<n; i++){
        fscanf(fp, "%d", a+i);
    }
}

int sum( int n, int *a){
    int s=0;
    for( int i=0; i<n; i++){
        s+=*(a+i);
    }
    return s;
}

int main(){
    FILE *fp=fopen("numbers.txt", "r");
    FILE *fp1=fopen("lo.txt", "w");
    FILE *fp2=fopen("anna.txt", "r");
    if( fp==NULL && fp1==NULL){
        printf("nahhh");
    }
    else{   
        int a[100];

        read(a, 5, fp);
        int x=sum(5, a);
        fprintf(fp1, "%d", x);
    }

    // a simple writing to file
    char ch;
    while((ch=fgetc(fp))!=EOF){
        fputc(ch, fp1);
    }
    int num; 
    if (fscanf(fp2, "%d", &num) != 1) { 
    fprintf(stdout, "Error reading integer from file\n"); 
}
    fclose(fp);
    fclose(fp1);
}