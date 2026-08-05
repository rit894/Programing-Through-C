#include <stdio.h>
#include <string.h>

int main() {
    int choice;
    int n = 0;  // number of students
    int roll[100];
    char name[100][50];
    float m1[100], m2[100], m3[100];
    float total[100], percent[100];
    char status[100][10];
    char grade[100][3];

    while (1) {
        printf("\n===== MENU =====\n");
        printf("1. Add Student\n");
        printf("2. View Results\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("\nEnter Roll Number: ");
            scanf("%d", &roll[n]);
            printf("Enter Name: ");
            scanf("%s", name[n]);
            printf("Enter 3 subject marks: ");
            scanf("%f %f %f", &m1[n], &m2[n], &m3[n]);

            // Calculate total and percentage
            total[n] = m1[n] + m2[n] + m3[n];
            percent[n] = total[n] / 3.0;

            // Pass/Fail check
            if (m1[n] > 40 && m2[n] > 40 && m3[n] > 40 && percent[n] > 40) {
                strcpy(status[n], "PASS");
            } else {
                strcpy(status[n], "FAIL");
            }

            // Grade assignment using switch
            int p = (int)percent[n];
            switch (p / 10) {
                case 10:
                case 9: strcpy(grade[n], "A+"); break;
                case 8: strcpy(grade[n], "A"); break;
                case 7: strcpy(grade[n], "B"); break;
                case 6: strcpy(grade[n], "C"); break;
                case 5: strcpy(grade[n], "D"); break;
                default: strcpy(grade[n], "F"); break;
            }

            n++;  // increment student count
            printf("Student added successfully!\n");

        } else if (choice == 2) {
            printf("\n===== STUDENT RESULTS =====\n");
            printf("%-10s %-15s %-8s %-8s %-8s %-8s %-10s %-6s\n",
                   "RollNo", "Name", "Mark1", "Mark2", "Mark3",
                   "Percent", "Status", "Grade");

            for (int i = 0; i < n; i++) {
                printf("%-10d %-15s %-8.2f %-8.2f %-8.2f %-8.2f %-10s %-6s\n",
                       roll[i], name[i], m1[i], m2[i], m3[i],
                       percent[i], status[i], grade[i]);
            }

        } else if (choice == 3) {
            printf("Exiting program...\n");
            break;
        } else {
            printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}
