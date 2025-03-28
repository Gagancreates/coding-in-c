#include<stdio.h>
void modify(int *x){
    *x=20;
}
int main()
{
    int num=10;
    modify(num);
    printf("%d", num);
    return 0;
}
