#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    // char a[]={ 'H', 'e', 'l', 'l', 'o', '\0'};
    // printf("The size of the string is %d\n", sizeof(a));
    // char a9[]="atma\\0";
    // printf("The size of the string is %d\n", sizeof(a9));
    // printf("%s", a9);

    //taking the input from the user, terminates on new line
    // char a1[100];
    // scanf("%[^\n]s", a1);
    // printf("%s", a1);

    //takes input as long as the string contains any of the letters a,b,c,d
    // char a2[10];
    // scanf("%[abcd]s", a2);
    // printf("%s", a2);
    // printf("The length of the string is %d\n", sizeof(a2));

    //takes input as long as the string  does not contain any of the letters a,b,c,d
    // char a3[10];
    // scanf("%[^abcd]s", a3);
    // printf("%s", a3);
    // printf("The length of the string is %d\n", sizeof(a3));


    //modifying char arrays
    // char str1[10]="hello";
    // printf("%s\n", str1);
    // str1[0]='H';
    // printf("%s\n", str1);


    //string pointed by char pointer( this is read only storage of the string and you cannnot modify it)
    char *p="hello";
    printf("The size of the string is %d\n", sizeof(p));
    // p[0]='H'; // this will give an error because the string is in read only memory
    printf("%s\n", p);
    p++;
    printf("%s\n", p);

    
}