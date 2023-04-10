// シェルソート（第２版：h = …, 13, 4, 1）

#include <stdio.h>
#include <stdlib.h>

/*--- シェルソート（第２版：h = …, 13, 4, 1） ---*/
void shell(int a[], int n)
{
    int h;

    for (h = 1; h < n; h = h * 3 + 1)
        ;

    for ( ; h > 0; h /= 3)
        for (int i = h; i < n; i++) {
            int tmp = a[i];
            int j;
            for (j = i - h; j >= 0 && a[j] > tmp; j -= h)
                a[j + h] = a[j];
            a[j + h] = tmp;
        }
}

int main(void)
{
    int nx;

    puts("シェルソート");
    printf("要素数：");
    scanf("%d", &nx);
    int *x = calloc(nx, sizeof(int));

    for (int i = 0; i < nx; i++) {
        printf("x[%d] : ", i);
        scanf("%d", &x[i]);
    }

    shell(x, nx);               // 配列xをシェルソート

    puts("昇順にソートしました。");
    for (int i = 0; i < nx; i++)
        printf("x[%d] = %d\n", i, x[i]);

    free(x);                    // 配列xを破棄

    return 0;
}
