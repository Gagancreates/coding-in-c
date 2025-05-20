#include<stdio.h>
#include<string.h> 
#include<stdlib.h>
#include <ctype.h>
void lower(char *str ){
    for( int i=0; str[i]!='\0'; i++){
    
        str[i]=tolower(str[i]);
    }
}

void reverse( char *str){
    int i=0;
    int j= strlen(str)-1;
    while( i<j){
        char temp=str[i];
        str[i]=str[j];
        str[j]=temp;
         i++;
        j--;
    }
   

}

int main(){
    
    //2
    // char pass[10]="student";
    // char login[100];
    // scanf("%[^\n]s",  login);
    // if((strcmp(pass, login))){
    //     printf("no");

    // }else{
    //     printf("yes");
    // }


    //3
    // char s[100];
    // char m[10]="friday";
    // scanf("%s", s);
    // lower(s);
    // if(strcmp(s, m)==0){
    //     printf("yes party");
    // }


    //6
    char s[100]="sindhu r pai ";
    reverse(s);
    printf("after:%s", s);


}