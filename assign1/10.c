/*
* Copyright Rohit Das (C) 2017
* To display addition of lower triangular elements
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i, j;
	
	int size;
	printf("Enter size: ");
	scanf("%d", &size);
	
	int **a = (int **) malloc(size * sizeof(int *));
	for (i = 0; i < size; i++) {
		a[i] = (int *)malloc(size * sizeof(int));
	}

	int **b = (int **) malloc(size * sizeof(int *));
	for (i = 0; i < size; i++) {
		b[i] = (int *)malloc(size * sizeof(int));
	}

	int **c = (int **) malloc(size * sizeof(int *));
	for (i = 0; i < size; i++) {
		c[i] = (int *)malloc(size * sizeof(int));
	}
	
	printf("Enter the elements for first matrix:\n");
	for (i = 0; i < size; i++) {
		for (j = 0; j < size; j++) {
			scanf("%d", &a[i][j]);
		}
	}

	printf("Enter the elements for second matrix:\n");
	for (i = 0; i < size; i++) {
		for (j = 0; j < size; j++) {
			scanf("%d", &b[i][j]);
		}
	}
	
	for (i = 0; i < size; i++) {
		for (j = 0; j < size; j++) {
			if (i + j < size - 1) {
				continue;
			} else {
				c[i][j] = a[i][j] + b[i][j];
			}
		}
		printf("\n");
	}

	for (i = 0; i < size; i++) {
		for (j = 0; j < size; j++) {
			if (i + j < size - 1) {
				printf("__ ");
			} else {
				printf("%d ", c[i][j]);
			}
		}
		printf("\n");
	}
	return 0;
}
