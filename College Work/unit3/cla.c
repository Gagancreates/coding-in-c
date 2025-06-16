#include<stdio.h>
int main(int argc, char *arga[]){
    for( int i=0; i<argc; i++){
        printf("argc %d: %s\n", i, arga[i]);
    }
}