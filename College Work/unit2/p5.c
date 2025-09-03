// // callback funcitions in C
// #include<stdio.h>
// int call(int x, int y, int (*op)(int, int )){
//     return op(x, y);
// }
// int add( int x, int y){
//     return x+y;
// }
// int mul( int x, int y){
//     return x*y;
// }

// int main(){

//     int x=10; int y=2;
//     printf("%d", call(x, y, add));
// }



//map, filter and reduce in C
#include<stdio.h>
int incr( int x){
    return x+1;

}

int even( int x){
    if(x%2==0){
        return x;
    }
    else{
        return 0;
    }
}
int map( int *a, int *b,int n, int op(int)){
    for( int i=0; i<n;i++){
        b[i]=op(a[i]);
    }
}
int filter( int *a, int *c, int n, int op(int)){
    int j=0;
    for( int i=0; i<n;i++){
        if(op(a[i])){
        c[j]=op(a[i]);
        j++;
        }
    
        
    }
}
int main(){
    int a[5]={ 1,2,3,4,5};
    int b[10];
    int c[10]={0};
    map(a,b,5, incr);
    for( int i=0; i<5;i++){
        printf("%d ", b[i]);
    }
    printf("\n");
    filter(a,c,5, even);
    
    for( int i=0; i<5;i++){
        printf("%d ", c[i]);
    }

    

}