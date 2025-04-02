#include<stdio.h>
int main(){

    //POINTER ARITHMETIC, MOVING THE POINTER FORWARD BY THE AMOUNT OF SIZE AS THAT OF THE DATA TYPE IT IS REFERNCED TO
    int a=100;
    int *p=&a;
    printf("p =%p\n", p);

    printf("p+1 =%p\n", (int*)p+1);
    printf("p+1 =%p\n", (char*)p+1);

    printf("p+1 =%p", (float*)p+1);

    int arr[5]={ 1, 2, 3, 4, 5};
    int *p=arr;
    for (int i=0; i<5; i++){
        printf("%d\n", *p);
        (*p)++;
    }

    char ar[]="abc";
    char *po=ar;
    for (int i=0; i<5; i++){
            printf("%c\n", *po);
            (char*)po++;
        }


    int m[2][3]={{1, 2, 3}, {4, 5, 6}};
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            printf("%d", *(*(m+i)+j));
        }
        printf("\n");
    }    
    int *p=&m[0][0];
    for(int j=0; j<6; j++){
        printf("%d", *p);
        (*p)++;
    }
   

};
