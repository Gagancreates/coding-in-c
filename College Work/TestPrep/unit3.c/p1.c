#include<stdio.h>
#include<string.h>
char* findch(char *s, char c){
    char *p=NULL;
    char *m=s;
    while(*m!='\0' && p==NULL){
        if(*m==c){
            p=m;
        }
        m++;
    }
    return p;
}
int comp(char *a, char *b){
    int i=0;
    while(a[i]!='\0' && b[i]!='\0' && a[i]==b[i]){
        i++;
    }
    return a[i]-b[i];
    
}

void cat(char *a, char *b){
    int i=0;
    while(a[i]!='\0'){
        i++;
    }
    a[i]=' ';
    i++;
    for(int j=0; b[j]!='\0'; i++, j++){
        a[i]=b[j];
    }
}

//using pointer to pointer
void catt(char *a, char *b){
    int i=0,j=0;
    while(*a){
        a++;
    }
    while(*b){
        *a=*b;
        a++;
        b++;
    
    }
    *a='\0';
}

int main(){
// char a9[ ] = "atma\\0" ; 
// printf("sizeof a9 is %d",sizeof(a9));
// printf("%s", a9);

// char s[100];
// scanf("%[^abcd]s", s);
// printf("%s", s);


//pointer to an array of char

// char t[100];
// scanf("%[^\n]s", t);
// int i=0;
// while(t[i]!='\0'){
//     if(t[i]>='A' && t[i]<='Z'){
//         printf("%c", t[i]+32);

//     }
//     else{
//         printf("%c", t[i]);
//     }
//     i++;
// }

// char num[100];
// scanf("%s", num);
// int i=0;
// int n=0;
// while(num[i]!='\0'){
//    n= n*10 + (num[i]-'0');
//     i++;
// }
// printf("%d", n);

// char pin[100];
// scanf("%[1234567890]s", pin);
// int i=0;
// int len=0;
// while(pin[i]!=0){
//     len++;
//     i++;
// }

// if(len!=4){
//     printf("sorry");
// }
// else{
//     printf("thanks");
// }


// char sentence[100];
//     int i, count = 1;

//     printf("Enter a sentence: ");
//     scanf("%[^\n]s", sentence); 

//     for (i = 0; sentence[i] != '\0'; i++) {
//         if (sentence[i] == ' ' && sentence[i + 1] != ' ' && sentence[i + 1] != '\0') {
//             count++;
//         }
//     }

//     printf("Number of words: %d\n", count);

// char p1[100];
// char p2[100];
// // char p3[100];
// scanf("%s", p1);
// scanf("%s", p2);
// int len=0;
// int i=0;
// while(p1[i]!='\0'){
//     len++;
//     i++;
// }
// int len2=0;
// int k=0;
// while(p2[k]!='\0'){
//     len2++;
//     k++;
// }
// p1[len]=' ';
// int j=0;
// len++;
// while(p2[j]!='\0'){
//     p1[len]=p2[j];
//     j++;
//     len++;
// }
// p1[len+len2]='\0';
// printf("the joined str is %s", p1);


//orange level
// char p[100];
// scanf("%s", p);
// int i=0;
// int ch=0;
// int d=0;
// while(p[i]!=0){
//     if(p[i]>='A' && p[i]<='z'){
//         ch++;
//     }
//     if(p[i]>='0' && p[i]<='9'){
//         d++;
//     }
//     i++;
// }
// printf("digits: %d", d);
// printf("char : %d", ch);

//12
// char a[100];
// scanf("%s", a);
// char rev[100];
// int i=0;
// int n=0;
// while(a[i]!='\0'){
//     n++;
//     i++;
// }
// int len=n-1;
// int j=0;
// while(len!=-1){
//     rev[j]=a[len];
//     j++;
//     len--;
// }
// rev[j++]='\0';
// printf("%s\n", rev);

// for(int m=0; m<n; m++){
//     if(a[m]!=rev[m]){
//         printf("no");
//         break;
//     }
//     else{
//         printf("yess");
//         break;
//     }
// }

// char str[100];
//     int start, end, i = 0;

//     printf("Enter the sentence: ");
//     scanf("%[^\n]s", str);

//     while(str[i]!='\0'){
//         start=i;
//         while(str[i]!=' ' && str[i]!='\0'){
//             i++;
//         }
//         end=i-1;
//         while(end>=start){
//             printf("%c", str[end]);
//             end--;
//         }
//         if(str[i]==' '){
//             printf("%c", ' ');
//             i++;
//         }
//     }


// char bin[100];
// printf("enter the code: ");
// scanf("%s", bin);
// int j=0;
// int len=0;
// while(bin[j]!='\0'){
//     len++;
//     j++;
// }

// int i=0;
// while(bin[i]!='\0'){
//     if(bin[i]=='0'){
//         if(bin[i+1]=='0'){
//             printf("A");
//         }
//         else if (bin[i+1]=='1'){
//             printf("T");
//         }
//     }
//     else if(bin[i]=='1'){
//          if(bin[i+1]=='0'){
//             printf("C");
//         }
//         else if(bin[i+1]=='1'){
//             printf("G");
//         }

//     }
//     i=i+2;
// }


// char name[100]="hello so what";
// char *p=strchr(name, 's');
// printf("found at:  %s\n", p);
// printf("found at index:  %d\n", p-name);

// char *p1=strstr(name, "ell");
// printf(" ""so"" found at %s\n", p1);
// char *token=strtok(name, " ");
//  while (token != NULL) {
//         printf("%s\n", token);
//         token = strtok(NULL, " ");
//     }


//writing a strcmp function from scratch
char a[100]="bzna";
char b[10]="anna";
// printf("%d", comp(a,b));
// char *z=findch(a, 'n');
// printf("found at %d", z-a);
catt(a, b);
printf("%s", a);


}
