// #include<stdio.h>
// #include<string.h> 
// #include<stdlib.h>
// #include <ctype.h>

// //Pass Structure by Value


// //     struct Student{
// //         int id;
// //         char name[50];
// //         float marks;
// //     };
// //     void printn(struct Student s){
// //         printf("ID: %d\nName: %s\nMarks:%f", s.id, s.name, s.marks);
// //     }
// //     int main(){
// //     struct Student s1={10, "hello", 92.3};
// //         printn(s1);
// // }



// //Pass Structure by Pointer (Efficient)
// // struct Student{
// //     int id;
// //      char name[50];
// //     float marks;
// // };

// // void updatenewmarks(struct Student *s, int newmarks){
// //     s->marks=newmarks;    // use '->' to access members via pointer
// // }

// // void updatename(struct Student *s, char *newname){
// //     strcpy(s->name, newname);    // use '->' to access members via pointer
// // }
// // int main(){
// //     struct Student s1={10, "hello", 92.3};
// //     int newmarks=98.0;
// //     printf("old marks=%f", s1.marks);
// //     printf("old name=%s", s1.name);

// //     updatenewmarks(&s1, newmarks);
// // char newname[100]="Ggagan";
// //     updatename(&s1, newname);
// //     printf("updated marks=%f", s1.marks);
// //      printf("updated name=%s", s1.name);

// // struct Student{
// //     int id;
// //      char name[50];
// //     float marks;
// // };



// struct Student{
//     int id;
//      char name[50];
//     float marks;
// };


// void read( struct Student *s){
//     printf("Please enter id, name and marks by new line");
//     scanf("%d \n %s\n%f", &s->id, s->name, &s->marks);
// }

// void display( struct Student s){
//     printf("ID: %d\nName:%s\nMarks:%f", s.id, s.name, s.marks);

// }

// int main(){
//     struct Student p;
//     read(&p);
//     display(p);
// }


#include <stdio.h>
#include <string.h>

struct Player {
    int id;
    char name[50];
};

struct Player modify(struct Player p);
struct Player modify(struct Player p) {
    strcpy(p.name, "Sourav");  // modifying the copy
    return p;                  // return modified copy
}
int main() {
    struct Player p1 = {20, "sachin"};
    printf("Before change: %s\n", p1.name);

    p1 = modify(p1); // function returns modified copy
    printf("After change: %s\n", p1.name);

    return 0;
}


