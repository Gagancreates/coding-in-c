#include<stdio.h>
#include<string.h> 
#include<stdlib.h>
#include <ctype.h>

//Pass Structure by Value


//     struct Student{
//         int id;
//         char name[50];
//         float marks;
//     };
//     void printn(struct Student s){
//         printf("ID: %d\nName: %s\nMarks:%f", s.id, s.name, s.marks);
//     }
//     int main(){
//     struct Student s1={10, "hello", 92.3};
//         printn(s1);
// }



//Pass Structure by Pointer (Efficient)
// struct Student{
//     int id;
//      char name[50];
//     float marks;
// };

// void updatenewmarks(struct Student *s, int newmarks){
//     s->marks=newmarks;    // use '->' to access members via pointer
// }

// void updatename(struct Student *s, char *newname){
//     strcpy(s->name, newname);    // use '->' to access members via pointer
// }
// int main(){
//     struct Student s1={10, "hello", 92.3};
//     int newmarks=98.0;
//     printf("old marks=%f", s1.marks);
//     printf("old name=%s", s1.name);

//     updatenewmarks(&s1, newmarks);
// char newname[100]="Ggagan";
//     updatename(&s1, newname);
//     printf("updated marks=%f", s1.marks);
//      printf("updated name=%s", s1.name);

// struct Student{
//     int id;
//      char name[50];
//     float marks;
// };



// 


//2
// struct Data{
//     int date;
//     int month;
//     int year;
// };

// void read(struct Data *d){
//         scanf("%d %d %d", &d->date, &d->month, &d->year);
// }
// void disp(struct Data d){
//     printf ("date: %d\nmonth: %d\n year: %d\n", d.date, d.month, d.year);
// }
// int main(){

//     struct Data d;
//     printf("enter the values of date, month and year");
//     read(&d);
//     disp(d);
// }



//3
// struct Data{
//     char name[100];
//     int m1,m2,m3;
// };

// void read(struct Data *d){
//         scanf("%s %d %d %d", d->name, &d->m1, &d->m2, &d->m3);
// }

// void avg(struct Data d){
//     float a=(d.m1+ d.m2 + d.m3)/3.0;
//     printf("The avg marks of the student is %f", a);
// }
// void update(struct Data *d){
//     printf("Enter the new marks for m1");
//     scanf("%d", &d->m1);
// }
// void disp(struct Data d){
//     printf ("name: %s\nm1: %d\n m2: %d\n", d.name, d.m1, d.m2);
// }
// int main(){

//     struct Data d;
//     printf("enter the values of name, m1, m2 and m3: ");
//     read(&d);
//     // avg(d);
//     update(&d);
//     disp(d);
// }




// array of structures
// struct Data{
//     char name[100];
//     int m1;
// };

// int main(){
//     struct Data d[3];
//     for( int i=0; i<3; i++){
//         printf(" enter the detail for student %d\n",i+1);
//         printf("Enter the name: ");
//         scanf("%s", d[i].name);
//         printf("enter marks: ");
//         scanf("%d", &d[i].m1);

//     }

//      printf("\nStudent Details:\n");
//     for (int i = 0; i < 3; i++) {
//         printf("Name: %s, Marks: %d\n", d[i].name, d[i].m1);
//     }

//     float avg=0;
//      for (int i = 0; i < 3; i++) {
//         avg+=d[i].m1;
//     }
//     printf("The avg marks of the students are %f", avg/3.0);

//     int max=0;
//     int index=0;
//     for (int i = 0; i < 3; i++) {
//         if(d[i].m1>max){
//             max=d[i].m1;
//             index=i;
//         }
//     }
//     printf("The student with highest marks is\n name: %s\nmarks: %d", d[index].name,d[index].m1 );

// }


//////// IMPORTANT CODE SNIPPET/////////////////////////////
// the same thing but we are going to assign a funtion for each task
// struct Data{
//     char name[100];
//     int m1;
// };
// void read(struct Data d[], int n){
//     for( int i=0; i<n; i++){
//         printf(" enter the detail for student %d\n",i+1);
//         printf("Enter the name: ");
//         scanf("%s", d[i].name);
//         printf("enter marks: ");
//         scanf("%d", &d[i].m1);
//     }

//     }

// void disp(struct Data d[], int n){
//     for (int i = 0; i < n; i++) {
//         printf("Name: %s, Marks: %d\n", d[i].name, d[i].m1);
//     }
// }
// void avg(struct Data d[], int n){
//     float avg=0;
//      for (int i = 0; i < 3; i++) {
//         avg+=d[i].m1;
//     }
//     printf("The avg marks of the students are %f", avg/n);
// }

// void top(struct Data d[], int n){
//     int max=0;
//     int index=0;
//     for (int i = 0; i < n; i++) {
//         if(d[i].m1>max){
//             max=d[i].m1;
//             index=i;
//         }
//     }
//     printf("The student with highest marks is\n name: %s\nmarks: %d", d[index].name,d[index].m1 );
// }

// //sorting based on marks
// void sortmarks( struct Data d[], int n){
//     struct Data temp;
//     for(int i=0; i<n-1; i++){
//         for(int j=0; j<n-i-1; j++){
//             if(d[j].m1<d[j+1].m1){
//                 temp = d[j];
//                 d[j]=d[j+1];
//                 d[j+1]=temp;
//             }
//         }
//     }

// }

// //sorting based on alphabetical order
// void sortalpha( struct Data d[], int n){
//     struct Data temp;
//     for(int i=0; i<n-1; i++){
//         for(int j=0; j<n-i-1; j++){
//             if(strcmp(d[j].name, d[j+1].name)>0){
//                 temp=d[j];
//                 d[j]=d[j+1];
//                 d[j+1]=temp;
//             }
//         }
//     }
// }

// //searching based on marks
// void searchmarks( struct Data d[], int n, int key){
//     int found =0;
//     for(int i=0; i<n;i++){
//         if(d[i].m1==key){
//             printf("The marks is found at index %d", i);
//             found=1;
//             break;
//         }
//     }
//     if(!found){
//         printf("That marks cannot be found");
//     }
// }

// //search by name
// void searchname( struct Data d[], int n, char key[]){
//     int found =0;
//     for(int i=0; i<n;i++){
//         if(strcmp(d[i].name, key)==0){
//             printf("The name is found at index %d", i);
//             found=1;
//             break;
//         }
//     }
//     if(!found){
//         printf("That name cannot be found");
//     }
// }
// int main(){
//     int n;
//     printf("enter the size");
//     scanf("%d", &n);
//     struct Data d[n];
//     read(d, n);
//      printf("\nStudent Details:\n");
//     disp(d, n);
//     avg(d,n);
//     top(d, n);
//     sortmarks(d, n);
//     printf("after sort\n");
//     disp(d, n);
//     printf("after sort alphabetically:\n");
//     sortalpha(d, n);
//     disp(d, n);
//     searchmarks(d, n, 100);
//         searchmarks(d, n, 120);
//         searchname(d, n, "gagan");
//         searchname(d, n, "hello");


// }




// the same but using the concept of pointer to an array of structures
struct Data{
    char name[100];
    int m1;
};

void readpointers( struct Data *ptr, int n){
    for(int i=0; i<n;i++){
    printf("Please enter the details of student %d\n", i+1);
    printf("Enter the name: ");
    scanf("%s",(ptr+i)->name );
    printf("Enter the marks: ");
    scanf("%d", &(ptr+i)->m1);
}
}


void disppointers( struct Data *ptr, int n){
    for(int i=0; i<n;i++){
    printf("the details of student %d\n", i+1);
    printf("name: %s\n", (ptr+i)->name);
    printf("marks: %d\n", (ptr+i)->m1);
    
}
}

int main(){
    int n;
    printf("enter the size: ");
    scanf("%d", &n);
    struct Data d[n];
    struct Data *ptr=d;
    readpointers(ptr, n);
    disppointers(ptr, n);
}