#include <stdio.h>
#include <string.h>

// Define the Student structure
struct Student {
    int rollNumber;
    char name[50];
    int absences;
};

// Function to input student details
void inputStudents(struct Student students[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for Student %d:\n", i + 1);
        printf("Roll Number: ");
        scanf("%d", &students[i].rollNumber);

        printf("Name: ");
        scanf(" %[^\n]s", students[i].name);

        printf("Number of Absences: ");
        scanf("%d", &students[i].absences);
    }
}

// Function to display students with absences above a threshold
void displayAboveThreshold(struct Student students[], int n, int threshold) {
    printf("\nStudents with absences greater than %d:\n", threshold);
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (students[i].absences > threshold) {
            printf("Roll No: %d, Name: %s, Absences: %d\n",
                   students[i].rollNumber, students[i].name, students[i].absences);
            found = 1;
        }
    }

    if (!found) {
        printf("No students found above the threshold.\n");
    }
}

// Selection Sort by absences descending, then by name ascending
void sortStudents(struct Student students[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int maxIdx = i;
        for (int j = i + 1; j < n; j++) {
            if (students[j].absences > students[maxIdx].absences ||
                (students[j].absences == students[maxIdx].absences &&
                 strcmp(students[j].name, students[maxIdx].name) < 0)) {
                maxIdx = j;
            }
        }

        if (maxIdx != i) {
            struct Student temp = students[i];
            students[i] = students[maxIdx];
            students[maxIdx] = temp;
        }
    }
}

// Function to display all students
void displayAll(struct Student students[], int n) {
    printf("\nSorted List of Students:\n");
    for (int i = 0; i < n; i++) {
        printf("Roll No: %d, Name: %s, Absences: %d\n",
               students[i].rollNumber, students[i].name, students[i].absences);
    }
}

int main() {
    int n, threshold;

    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    inputStudents(students, n);

    printf("\nEnter absence threshold: ");
    scanf("%d", &threshold);

    displayAboveThreshold(students, n, threshold);

    sortStudents(students, n);

    displayAll(students, n);

    return 0;
}
