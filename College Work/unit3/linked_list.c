#include<stdio.h>
#include<string.h> 
#include<stdlib.h>
#include <ctype.h>


//lets learn aboout enums in C
int main(){

    enum week {
        mon, tue, wed
    };
    enum Speed { SLOW = 10, FAST = 20 };
    int diff = FAST - SLOW;  // OK
    printf("%d\n", diff);
    enum week w=mon;
    printf("%d", w);
}