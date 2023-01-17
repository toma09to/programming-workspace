#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int *first(int size)
{
    int *array;

    array = (int *)malloc(sizeof(int) * size);

    printf("(1) array = {");
    for (int i = 0; i < size; i++) {
        array[i] = rand() % 100;
        printf("%d, ", array[i]);
    }
    printf("}\n");

    return array;
}

void second(int array[], int size)
{
    int min = array[0];
    for (int i = 1; i < size; i++) {
        if (array[i] < min) {
            min = array[i];
        }
    }

    printf("(2) min = %d\n", min);
}

void third(int array[], int size)
{
    for (int i = 0; i < size / 2; i++) {
        swap(&array[i], &array[size - i - 1]);
    }

    printf("(3) rev = {");
    for (int i = 0; i < size; i++) {
        printf("%d, ", array[i]);
    }
    printf("}\n");
}

int main(void)
{
    srand((unsigned)time(NULL));

    int size;
    int *array;

    printf("size? ");
    scanf("%d", &size);

    array = first(size);
    second(array, size);
    third(array, size);

    free(array);

    return 0;
}
