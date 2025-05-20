#include<stdio.h>
#include<string.h>
// void my_strcopy( char *a, char *b)
//     {
//         int i=0;
//         while(a[i]!='\0'){
//             b[i]=a[i];
//             i++;
//         }
//         b[i]='\0';
//     }
int main(){
    // char a[]="hello";
    // printf("%d\n", strlen(a));

    // char b[100];
    // printf("%d", strcmp("abe", "abd"));


    // NOW DOING SOME STRING HANDLING FUNCITONS

    // strchr: it helps to find the first occurence of the char and returns a pointer to that char
    // char str[]="helloW";
    // char *p= strchr(str, 'W');
    // if(p){
    //     printf("The first occurence of the element in the str is %d", p-str);

    // }

    // //strrchr
    // char *ptr= strrchr(str, 'l');
    // if(ptr){
    //     printf("The last occurence of the element l is %d", ptr-str);
    // }



    // //strstr
    // // tnis gives the occurence of a substring inside a string
    // char *found= strstr(str, "ell");
    // if(found){
    //     printf("The substring is found at a location %d", found-str);
    // }


    //strtok
    //splits the word based on the delimitter, we can use , . or any other things to break the sentence into tokens
    // char fruits[]=" apple, pineapple, orange";
    // char *token= strtok(fruits, ",");
    // while(token!=NULL){
    //     printf("Token:%s\n", token);
    //     token = strtok(NULL, ",");
    //     }


    // char *str1="gagan";
    // char *str_copy= str1;
    // while(*str_copy){
    //     str_copy++;
    // }
    // printf("%d", str_copy-str1);


    // implementing str copy from scratch
    char p[20]="where";
    strcpy(p, "Hello");
    printf("%s", p);

    char *str=malloc(20);
    strcpy(str, "Hello");
    printf("%s", str);
    free(str);
}

