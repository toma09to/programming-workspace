#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int **first(int n)
{
    int **matrix;
    matrix = (int **)malloc(sizeof(int *) * n);
    for (int i = 0; i < n; i++) {
        matrix[i] = (int *)malloc(sizeof(int) * n);
    }

    printf("(1) matrix =\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matrix[i][j] = rand() % 10;
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return matrix;
}

void second(int **matrix, int n)
{
    int trace = 0;
    for (int i = 0; i < n; i++) {
        trace += matrix[i][i];
    }

    printf("(2) trace = %d\n", trace);
}

void third(int **matrix, int n)
{
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            swap(&matrix[i][j], &matrix[j][i]);
        }
    }

    printf("(3) transposed =\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main(void)
{
    int n;
    int **matrix;

    printf("n? ");
    scanf("%d", &n);

    matrix = first(n);
    second(matrix, n);
    third(matrix, n);

    for (int i = 0; i < n; i++) {
        free(matrix[i]);
    }
    free(matrix);

    return 0;
}
