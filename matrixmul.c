#include <stdio.h>

int main() {
    int firstMatrix[10][10], secondMatrix[10][10], result[10][10];
    int rowFirst, colFirst, rowSecond, colSecond, i, j, k;
    
    printf("Enter rows and columns for the first matrix: ");
    scanf("%d %d", &rowFirst, &colFirst);
    
    printf("Enter elements of the first matrix:\n");
    for(i = 0; i < rowFirst; ++i) {
        for(j = 0; j < colFirst; ++j) {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &firstMatrix[i][j]);
        }
    }

    printf("enter the rows and columns for second matrix: ");
    scanf("%d %d", &rowSecond, &colSecond);

    // Check if multiplication is possible
    if (colFirst != rowSecond) {
        printf("Matrix multiplication is not possible. Number of columns in the first matrix must be equal to the number of rows in the second matrix.\n");
    } else {
        printf("Enter elements of the second matrix:\n");
        for(i = 0; i < rowSecond; ++i) {
            for(j = 0; j < colSecond; ++j) {
                printf("Enter element b%d%d: ", i + 1, j + 1);
                scanf("%d", &secondMatrix[i][j]);
            }
        }

        // Multiply the two matrices
        for(i = 0; i < rowFirst; ++i) {
            for(j = 0; j < colSecond; ++j) {
                result[i][j] = 0;
                for(k = 0; k < colFirst; ++k) {
                    result[i][j] += firstMatrix[i][k] * secondMatrix[k][j];
                }
            }
        }

        // Display the result
        printf("Resultant matrix after multiplication:\n");
        for(i = 0; i < rowFirst; ++i) {
            for(j = 0; j < colSecond; ++j) {
                printf("%d ", result[i][j]);
                if(j == colSecond - 1)
                    printf("\n");
            }
        }
    }

    return 0;
}

