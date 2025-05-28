#include<stdio.h>
int main(){
    FILE *fp=fopen("data.txt", "r");
    if(fp==NULL){
        printf("couldnt access the file");

    }
    else{
        printf("The file was successfully accessed, now printing the content\n");
        char ch;
        while((ch=fgetc(fp))!=EOF){
            fputc(ch, stdout);
        }
        fclose(fp);
    }
    return 0;
}