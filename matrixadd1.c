#include<stdio.h>
int main()
{
	int i,j,matrix_A[100][100],matrix_B[100][100],matrix_R[100][100];
	int row,column;
	printf("Enter the row size:");
	scanf("%d",&row);
	printf("Enter the column size:");
	scanf("%d",&column);
	printf("Enter the elements of A:");
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			scanf("%d",&matrix_A[i][j]);
		}
	}
	printf("Enter the elements of B:");
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			scanf("%d",&matrix_B[i][j]);
		}
	}
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			matrix_R[i][j]=matrix_A[i][j]+matrix_B[i][j];
		}
	}
	printf("Addition of two matrix is:\n");
	for(i=0;i<row;i++)
	{
		for(j=0;j<column;j++)
		{
			printf("%d\t",matrix_R[i][j]);
		}
		printf("\n");
	}
}

