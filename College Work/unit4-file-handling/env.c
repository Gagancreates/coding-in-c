// #include<stdio.h>
// int main( int argc, char *argv[], char *envp[]){
//     int i=0;
//     while(envp[i]!=NULL){
//         printf("%d %s\n", i, envp[i]);
//         i++;
//     }
// }


// using the environ variable
// #include<stdlib.h>
// int main(){
//     char **p=environ;
//     int i=0;
//     while((*p)!=NULL){
//         printf("%d: %s\n",i, *p);
//         p++;
//     }
// }


//getting the env variables using the getenv function
// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     char *p=getenv("TEMP");
//     if(p!=NULL){
//         printf("%s", p);
//     }
//     else{
//         printf("noo");
//     }
// }


//now using the getenv function and the setenv function to write a new path for a env variable
// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     char *p=getenv("PATH");
//     if(p!=NULL){
//         printf("%s", p);
//     }
//     else{
//         printf("noo");
//     }
// }




//creating a new env variable in c
// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     setenv("HELLO", "brothisisthenewenvvariable1220",1);
//     char *p=getenv("HELLO");
//     printf("The assigned value for the env is displayed: %s", p);
// }



//using putenv to create a new env and assign a value to it
// #include<stdio.h>
// #include<stdlib.h>
// int main(){
//     setenv("HELLO", "brothisisthenewenvvariable1220",1);
//     printf("%s", getenv("HELLO"));
//     putenv("HELLO=loyenoidhu");   // in the form of "KEY=VALUE"
//     printf("%s", getenv("HELLO"));
// }



//appending a new path to an existing path
// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>
// int main(){
//     setenv("HELLO", "brothisisthenewenvvariable1220",1);
//      printf("%s", getenv("HELLO"));
//      char newpath[100]="_anna";
//      char *old=getenv("HELLO");
//      strcat(old, newpath);
//      setenv("HELLO", old, 1);
//      printf("after the change in the env variable");
//      printf("%s", getenv("HELLO"));



// }



// using macros
#include<stdio.h>
#define pi 3.14
int main(){
        printf("%f", pi);
}