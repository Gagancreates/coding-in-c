#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct student {
    int roll;
    char name[20];
} STUDENT;

int search(STUDENT **aop, int low, int high, int key)
{
     if (low > high) return -1;

    int mid = (low + high) / 2;
    if (aop[mid]->roll == key) return mid;
    else if (key < aop[mid]->roll)
        return search(aop, low, mid - 1, key);
    else
        return search(aop, mid + 1, high, key);
}

void disp(STUDENT* p[], int n) {
    printf("\nList of Students:\n");
    for (int i = 0; i < n; i++) {
        printf("Roll No: %d\tName: %s\n", p[i]->roll, p[i]->name);
    }
}

void init_ptr(STUDENT s[], STUDENT *p[], int n) {
    for (int i = 0; i < n; i++) {
        p[i] = &s[i];
    }
}
int main(){
    FILE *fr=fopen("student.csv", "r");
    if(fr==NULL){
        printf("couldnt open the file ");
        exit(1);
    }
   char line[100];
   fgets(line, 200, fr);
   STUDENT s[100];
   STUDENT *p[100];
   int i=0;
       while (fgets(line, 200, fr)) {
        char *token = strtok(line, ",");
        if (token == NULL) continue;

        int roll = atoi(token);
        token = strtok(NULL, ",");
        if (token == NULL) continue;

        s[i].roll = roll;
        strcpy(s[i].name, token);
        // Remove trailing newline from name
        s[i].name[strcspn(s[i].name, "\n")] = '\0';

        i++;
    }

    fclose(fr);

    int n = i;
    init_ptr(s, p, n);
    disp(p, n);

    int key_rollno;
    printf("\nEnter the roll number of the student to be searched: ");
    scanf("%d", &key_rollno);

    int res = search(p, 0, n - 1, key_rollno);

    if (res == -1) {
        printf("Student not found\n");
    } else {
        printf("Student details are here:\n");
        printf("Roll Number: %d, Name: %s\n", p[res]->roll, p[res]->name);
    }

    return 0;
}


    
