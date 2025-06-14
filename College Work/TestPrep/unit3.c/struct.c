#include<stdio.h>
#include<stdlib.h>
struct what{
    int age;
    char name[10];

};
void read(struct what *p){
    printf("enter the age: ");
    scanf("%d", &p->age);
    printf("enter the name: ");
    scanf("%s", p->name);

}
void disp(struct what p){
    printf("age: %d\nname: %s\n", p.age, p.name);
}

// reading using pointer to array of structures
void readd(struct what *p, int n){
    for(int i=0; i<n; i++)
{    printf("enter the age: ");
    scanf("%d", &p[i].age);
    printf("enter name: ");
    scanf("%s", (p+i)->name);
    
}
}

//display using pointer to array of structures
void dispp(struct what *p, int n){
    for(int i=0; i<n; i++)
{    printf(" age student %d: %d \n", i, (p+i)->age);
   printf(" name student %d: %s\n", i, (p+i)->name);
    
}

}


int main(){
    int n;
    struct what p[10];
    // read(&p);
    // disp(p);
    printf("enter the number of records to be stored: ");
    scanf("%d", &n);
    // for( int i=0; i<n; i++){
    //     printf("enter the details for student %d: ", i);
    //     scanf("%d", &p[i].age);
    // }

    //  for( int i=0; i<n; i++){
    //     printf("student %d age: %d\n", i, p[i].age);
    // }

    // // initialising a pointer to an array
    // struct what *pointer=p;
    // // printing elements using the same
    // for(int i=0; i<n; i++){
    //     printf("age: %d\n", (pointer+i)->age);
    // }
    readd(p, n);
    dispp(p, n);
}