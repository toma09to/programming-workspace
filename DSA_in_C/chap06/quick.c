// クイックソート

#include <stdio.h>
#include <stdlib.h>

#define swap(type, x, y)  do { type t = x; x = y; y = t; } while (0)

/*--- クイックソート ---*/
void quick(int a[], int left, int right)
{
    int pl = left;              // 左カーソル
    int pr = right;             // 右カーソル
    int x = a[(pl + pr) / 2];   // 枢軸は中央の要素

    do {
        while (a[pl] < x) pl++;
        while (a[pr] > x) pr--;
        if (pl <= pr) {
            swap(int, a[pl], a[pr]);
            pl++;
            pr--;
        }
    } while (pl <= pr);

    if (left < pr)  quick(a, left, pr);
    if (pl < right) quick(a, pl, right);
}

int main(void)
{
    int nx;

    puts("クイックソート");
    printf("要素数：");
    scanf("%d", &nx);
    int *x = calloc(nx, sizeof(int));   // 要素数nxのint型配列xを生成

    for (int i = 0; i < nx; i++) {
        printf("x[%d] : ", i);
        scanf("%d", &x[i]);
    }

    quick(x, 0, nx - 1);                // 配列xをクイックソート

    puts("昇順にソートしました。");
    for (int i = 0; i < nx; i++)
        printf("x[%d] = %d\n", i, x[i]);

    free(x);                            // 配列xを破棄

    return 0;
}
