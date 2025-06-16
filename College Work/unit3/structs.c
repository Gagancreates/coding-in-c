// #include<stdio.h>
// #include<string.h>
// // structs in C
// struct St{
//     int marks;
//     char name[10];
// }s[10];
// int main(){
//     s[0].marks=90;
//     strcpy(s[0].name,"gagan");
//     printf("%d   %s\n", s[0].marks, s[0].name);

//     for( int i=1; i<10; i++){
//         s[i].marks= i*10;
//         strcpy(s[i].name, "anna");
//     }
   
    
//     for( int i=1; i<10; i++){
//         printf("marks: %d    name: %s\n", s[i].marks, s[i].name);

//     }
    

// }



#include<stdio.h>
#include<string.h>
// functions and struct

struct St{
    int marks;
    char name[10];
};


void read( struct St *s, int n){
    printf("enter the values:\n");
    for(int i=0; i< n; i++){
        printf("student %d:\n ", i+1);
        printf("enter name: ");
        scanf("%s", s[i].name);
        printf("enter marks: ");
        scanf("%d", &s[i].marks);
    }
}


void read_pointer(struct St *s, int n ){
    printf("enter the values:\n");
    for(int i=0; i< n; i++){
        printf("student %d:\n ", i+1);
        printf("enter name: ");
        scanf("%s", (s+i)->name);
        printf("enter marks: ");
        scanf("%d", &(s+i)->marks);
    }
}

void disp( struct St *s, int n){
    for(int i=0; i< n; i++){
        printf("student %d:\n ", i+1);
        printf("name: %s     marks: %d", s[i].name, s[i].marks);

}
}

void disp_pointers(struct St *s, int n){
    for(int i=0; i< n; i++){
        printf("student %d:\n ", i+1);
        printf("name: %s     marks: %d\n", (s+i)->name, (s+i)->marks);

}

}

void search( struct St *s, int n, int key){
    int found=0;
    for(int i=0; i< n; i++){
        if((s+i)->marks==key){
        printf("student %d:\n ", i+1);
        printf("name: %s     marks: %d\n", (s+i)->name, (s+i)->marks);
        found=1;
        break;
        }    
    }
   
            printf("nahhh");
    
}
int main(){
int n;
    printf("enter the number of students: ");
    scanf("%d", &n);
    
    
    struct St s[n];
    read_pointer( s, n);
    disp_pointers(s, n);
    printf("\n");
    printf("enter the student marks to be searched: ");
    int key;
    scanf("%d", &key);
    search(s, n, key);


}
