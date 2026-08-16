#include <stdio.h>

int main() {

    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    int rollno[n];
    int mark[n];
    char grade[n];

    printf("Enter Roll No and Marks of each student:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &rollno[i], &mark[i]);
    }

    int search;
    printf("Enter Roll number to search: ");
    scanf("%d", &search);

    int pos = -1;
    for (int i = 0; i < n; i++) {
        if (rollno[i] == search) {
            pos = i + 1;
            break;
        }
    }

    if (pos == -1)
        printf("Roll number not found\n");
    else
        printf("Roll number found at position %d\n", pos);

    // Assign grades
    for (int i = 0; i < n; i++) {
        if (mark[i] >= 90)
            grade[i] = 'A';
        else if (mark[i] >= 75)
            grade[i] = 'B';
        else
            grade[i] = 'F';
    }

    // Sort by marks (Bubble Sort)
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (mark[j] > mark[j + 1]) {

                int tempMark = mark[j];
                mark[j] = mark[j + 1];
                mark[j + 1] = tempMark;

                int tempRoll = rollno[j];
                rollno[j] = rollno[j + 1];
                rollno[j + 1] = tempRoll;

                char tempGrade = grade[j];
                grade[j] = grade[j + 1];
                grade[j + 1] = tempGrade;
            }
        }
    }

    printf("\nSorted (By Marks):\n");
    for (int i = 0; i < n; i++) {
        printf("Rank %d : Roll %d - Marks %d - Grade %c\n",
               i + 1, rollno[i], mark[i], grade[i]);
    }

    return 0;
}
