#include <stdio.h>

int main() {
    int n, m;

    // Input the number of students and subjects
    printf("Enter the number of students: ");
    scanf("%d", &n);
    printf("Enter the number of subjects: ");
    scanf("%d", &m);

    int marks[n][m];

    // Input marks for each student in each subject
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("Enter marks for student %d in subject %d: ", i + 1, j + 1);
            scanf("%d", &marks[i][j]);
        }
    }

    // Calculate and display the minimum marks in each subject
    int min_marks[m];

    for (int j = 0; j < m; j++) {
        min_marks[j] = marks[0][j];
        for (int i = 1; i < n; i++) {
            if (marks[i][j] < min_marks[j]) {
                min_marks[j] = marks[i][j];
            }
        }
        printf("Minimum marks in subject %d: %d\n", j + 1, min_marks[j]);
    }

    return 0;
}
