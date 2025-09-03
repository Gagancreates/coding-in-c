#include<stdio.h>
#include<stdlib.h>
int main(){
    char *path=getenv("PATH");
    printf("env is: %s\n", path);
    putenv("COLLEGE=PES");
    printf("new env: %s", getenv("COLLEGE"));
}