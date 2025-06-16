// #include<stdio.h>
// int main(){
//     char s[100]="anna";
//     int i=0;
//     int count =0;
//     while(s[i]!='\0'){
//         count++;
//         i++;
//     }
//     printf("%d", count);
// }



#include<stdio.h>
// void strcpyy(char *a, char *b){
//     int i=0;
//     while(a[i]!='\0'){
//         b[i]=a[i];
//         i++;
//     }
//     b[i]='\0';


// }

// void strcompare( char *a, char *b){
//     int i;
//     for( i=0; b[i]!='\0' && a[i]!='\0' && b[i]==a[i]; i++){
//         return a[i]=b[i];
//     }

//     for(; *a && *b && *a==*b; a++,b++)
//     {
//         return *a-*b;
//     }
// }

void conc(char *a, char *b){
    while(*a!='\0'){
        a++;
    }
   
    while(*b!='\0'){
        *a=*b;
        a++;
        b++;
    }
    
    *a='\0';
}
int main(){
    // implementing str cpy
    char a[10]="hello";
    char b[10]="anna";
    conc(a, b);
    printf("conc string: %s", a);

}