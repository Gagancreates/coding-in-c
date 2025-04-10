#include <stdio.h>
#include <stdlib.h>

int global_var = 10;          // Initialized data segment
int uninit_global_var;        // BSS segment

void foo(int param) {         // Text segment
    int local_var = 5;        // Stack
    static int static_var = 0;// Initialized data segment
    int* dynamic_var = malloc(sizeof(int)); // Heap
    *dynamic_var = 20;
    free(dynamic_var);        
}

int main() {                  // Text segment
    int local_main_var = 15;  // Stack
    foo(local_main_var);
    return 0;
}