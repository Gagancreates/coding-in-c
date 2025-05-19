// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>
// int main(){
    

    //2
    // char str2[100]="Good 123 Morning!, and 23 ";
    // int i=0;
    // while(str2[i]!='\0'){
    //     if(str2[i]>='A' && str2[i]<='Z'){
    //         str2[i]=str2[i]+32;
    //     }
    //     i++;
    // }
    // printf("%s\n", str2);


    //3
    // char str[100]="676";
    // printf("%s\n", str);\
    // printf("After converting the string in to integer: ");
    // int i=0;
    // int num=0;
    // while(str[i]!=0){
    //     num = num*10 + (str[i]-'0'  );
    //     i++;
    // }

    // printf("%d\n", num);

    
    //4
    // char str[]="Mission Success";
    // int i=0;
    // int len=0;
    // while(str[i]!='\0'){
    //     len++;
    //     i++;

    // }
    // printf("Length of the string is: %d\n", len);
    


    //5
    // printf("Enter the 4 digit pin: ");
    // char pin[]= "0000";
    // scanf("%s", pin);
    // if(strlen(pin) != 4){
    //     printf("Invalid pin\n");
    //     return 1;
    // }
    // for(int i=0; i<4; i++){
    //     if(pin[i]<'0' || pin[i]>'9'){
    //         printf("Invalid pin\n");
    //         return 1;
            
    //     }
    // }
    // printf("The pin is: %s\n", pin);


    //6
    // char str[100]="hellobaby";
    // char str2[100]="hellobabyy";
    // int n=strlen(str);
    // int m=strlen(str2);
    // if(n!=m){
    //     printf("The strings are not the same\n");
       
    //     exit(0);
    // }
    // for(int i=0; i<n; i++){
    //     if(str[i]!=str2[i]){
    //         printf("The strings are not the same\n");
    //         exit(0);
    //     }
    // }
    // printf("The strings are the same\n");



    //7
    // char str[100]="hsmm";
    // int n=strlen(str);
    // for(int i=0; i<n;i++){
    //     if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
    //         printf("%c", str[i]);
    //         exit(0);
    //     }
    // }

    // printf("There is no vowel in the string\n");


    //8
    // char str[100]="nihao nihao nigga, wassup"; 
    // int count=0;
    // for(int i=0; i<strlen(str); i++){
    //     if(str[i]==' '){
    //         count++;
    //     }
    // }
    // printf("The number of words in the string is: %d\n", count+1);



    //9
    // char str[]="hello";
    // char str1[]="nigga";
    // char str3[100];
    // int i=0;
    // int j =0;
    // while(str[i]!='\0'){
    //     str3[j++]=str[i++];
    
    // }
    // i=0;
    // str3[j++]=' ';
    // while(str1[i]!='\0'){
    //     str3[j++]= str1[i++];

    // }
    //  printf("the strings after joing are %s", str3);
 

    
// }
   
//level 2

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){

    //11
    // char str[]="6312-KA-15 ";
    // char s[]="6312-KA-15";
    // int i=0;
    // int charc=0;
    // int dc=0;
    // while(str[i]!='\0'){
    //     if(str[i]>='A' && str[i]<='z'){
    //         charc++;
    //     }
    //     if(str[i]>='0' && str[i] <='9'){
    //         dc++;
    //     }
    //     i++;

    // }
    // printf("The number of characters in the string is: %d\n", charc);
    // printf("The number of digits in the string is: %d\n", dc);



    //14
    // char str[]="PEs";
    // int i=0;
    // while(str[i]!='\0'){
    //     str[i]=str[i]+1;
    //     i++;
    // }
    // printf("The string after incrementing each character is: %s\n", str);


    //15
    char str[]="001101";
    char new[100];
    int n=strlen(str);
    if((strlen(str)%2)!=0){
        str[n-1]='\0';
    }
    int i=0;
    int j=0;
    while(str[i]!='\0'){
        if(str[i]=='0'){
            if(str[i+1]=='0'){
                new[j]='A';
            }
            else{
                new[j]='T';
            }
        }

        if(str[i]=='1'){
            if(str[i+1]=='0'){
                new[j]='C';
            }
            else{
                new[j]='G';
            }
        }
        i=i+2;
        j++;
    }
    printf("The new string is: %s\n", new);
        
    }










